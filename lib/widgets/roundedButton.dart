import 'package:flutter/material.dart';

class RoundedButton extends ElevatedButton {
  final VoidCallback? onPressed;
  final Widget? child;

  RoundedButton({required this.onPressed, required this.child})
      : super(onPressed: onPressed, child: child);
}
