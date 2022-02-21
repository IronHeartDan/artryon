import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

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
    return UnityWidget(onUnityCreated: onUnityCreated);
  }
}
