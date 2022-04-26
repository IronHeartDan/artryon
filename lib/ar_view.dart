import 'dart:async';

import 'package:flutter/material.dart';
import 'package:flutter/rendering.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:image_gallery_saver/image_gallery_saver.dart';
import 'package:permission_handler/permission_handler.dart';
import 'package:screenshot/screenshot.dart';

class ArView extends StatefulWidget {
  VoidCallback initCallback;
  bool isInit;
  ArView({Key? key, required this.isInit, required this.initCallback})
      : super(key: key);

  @override
  _ArViewState createState() => _ArViewState();
}

class _ArViewState extends State<ArView> {
  late UnityWidgetController _unityWidgetController;
  final ScreenshotController _screenshotController = ScreenshotController();
  static GlobalKey previewContainer = GlobalKey();

  void onUnityCreated(controller) async {
    _unityWidgetController = await controller;

    widget.isInit
        ? Future.delayed(
            const Duration(milliseconds: 300),
            () async {
              await _unityWidgetController.pause();
              Navigator.of(context).pop();
              Future.delayed(
                const Duration(milliseconds: 500),
                () async {
                  widget.initCallback();
                },
              );
            },
          )
        : null;
  }

  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: RepaintBoundary(
        key: previewContainer,
        child: Scaffold(
            body: Screenshot(
          controller: _screenshotController,
          child: Stack(
            children: [
              Positioned(
                  top: 0,
                  bottom: 0,
                  left: 0,
                  right: 0,
                  child: UnityWidget(onUnityCreated: onUnityCreated)),
              Positioned(
                  top: 0,
                  right: 0,
                  child: Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: InkWell(
                        onTap: () {
                          Navigator.of(context).pop();
                        },
                        child: const Icon(Icons.close)),
                  )),
              Positioned(
                  bottom: 10,
                  left: 0,
                  right: 0,
                  child: SizedBox(
                    height: 60,
                    width: 60,
                    child: Card(
                      shape: const CircleBorder(side: BorderSide.none),
                      child: InkWell(
                          onTap: () {
                            takePhoto();
                          },
                          child: const Icon(Icons.camera)),
                    ),
                  ))
            ],
          ),
        )),
      ),
    );
  }

  void takePhoto() async {
    RenderRepaintBoundary boundary = previewContainer.currentContext!
        .findRenderObject() as RenderRepaintBoundary;

    if (boundary.debugNeedsPaint) {
      Timer(const Duration(seconds: 1), () => takePhoto());
      return null;
    }

    var image = await boundary.toImage();
    var data = await image.toByteData();

    var status = await Permission.storage.status;
    if (status == PermissionStatus.granted) {
      await ImageGallerySaver.saveImage(data!.buffer.asUint8List());
      ScaffoldMessenger.of(context)
          .showSnackBar(const SnackBar(content: Text("Saved To Gallery")));
    } else {
      var status = await Permission.storage.request();
      if (status == PermissionStatus.granted) {
        await ImageGallerySaver.saveImage(data!.buffer.asUint8List());
        ScaffoldMessenger.of(context)
            .showSnackBar(const SnackBar(content: Text("Saved To Gallery")));
      } else {
        ScaffoldMessenger.of(context)
            .showSnackBar(const SnackBar(content: Text("An Error Occured")));
      }
    }
  }
}
