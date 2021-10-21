import 'package:arcore_flutter_plugin/arcore_flutter_plugin.dart';
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

class ArView extends StatefulWidget {
  const ArView({Key? key}) : super(key: key);

  @override
  _ArViewState createState() => _ArViewState();
}

class _ArViewState extends State<ArView> {
  late ArCoreController arCoreController;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: ArCoreView(
          onArCoreViewCreated: (ArCoreController controller) {
            setState(() {
              arCoreController = controller;
            });
          },
        ),
      ),
    );
  }
}
