import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class ArView extends StatefulWidget {
  const ArView({Key? key}) : super(key: key);

  @override
  _ArViewState createState() => _ArViewState();
}

class _ArViewState extends State<ArView> {
  UnityWidgetController? _unityWidgetController;

  @override
  Widget build(BuildContext context) {
    return UnityWidget(
      onUnityCreated: onUnityCreated,
      fullscreen: false,
    );
  }

  // Callback that connects the created controller to the unity controller
  void onUnityCreated(controller) {
    _unityWidgetController = controller;
  }
}
