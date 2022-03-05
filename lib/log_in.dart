import 'package:artryon/main_screen.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/foundation.dart';
import 'package:flutter/material.dart';
import 'package:flutter_signin_button/button_list.dart';
import 'package:flutter_signin_button/button_view.dart';
import 'package:google_sign_in/google_sign_in.dart';
import 'package:hexcolor/hexcolor.dart';

class LogIn extends StatefulWidget {
  const LogIn({Key? key}) : super(key: key);

  @override
  _LogInState createState() => _LogInState();
}

class _LogInState extends State<LogIn> {
  // Google Sign In
  void signInWithGoogle() async {
    try {
      // Trigger the authentication flow
      final GoogleSignInAccount? googleUser = await GoogleSignIn().signIn();

      // Obtain the auth details from the request
      final GoogleSignInAuthentication? googleAuth =
          await googleUser?.authentication;

      // Create a new credential
      final credential = GoogleAuthProvider.credential(
        accessToken: googleAuth?.accessToken,
        idToken: googleAuth?.idToken,
      );

      // Once signed in, return the UserCredential
      await FirebaseAuth.instance.signInWithCredential(credential);
      if (FirebaseAuth.instance.currentUser != null) {
        Navigator.of(context).pushAndRemoveUntil(
            MaterialPageRoute(builder: (context) => const MainScreen()),
            (route) => false);
      }
    } catch (e) {
      if (kDebugMode) {
        print(e);
      }
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Container(
          padding: const EdgeInsets.all(20.0),
          child: SingleChildScrollView(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Row(
                  mainAxisAlignment: MainAxisAlignment.end,
                  children: [
                    TextButton(
                        onPressed: () {
                          Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => const MainScreen()));
                        },
                        child: Text(
                          "Skip",
                          style: TextStyle(
                              fontWeight: FontWeight.w400,
                              fontSize: 18,
                              color: HexColor("#443C64")),
                        ))
                  ],
                ),
                Row(
                  children: const [
                    Text(
                      "Join AR TRYON",
                      style: TextStyle(fontSize: 24),
                    )
                  ],
                ),
                const SizedBox(
                  height: 10,
                ),
                Row(
                  children: [
                    const Text("Or"),
                    const SizedBox(
                      width: 5,
                    ),
                    Text(
                      "sign in",
                      style: TextStyle(color: HexColor("#10053F")),
                    )
                  ],
                ),
                const SizedBox(
                  height: 50,
                ),
                Row(
                  children: [
                    Expanded(
                      child: TextFormField(
                        decoration: InputDecoration(
                          labelStyle: TextStyle(color: HexColor("#443C64")),
                          counterText: "",
                          labelText: "Email or Phone",
                          focusedBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: HexColor("#443C64")),
                          ),
                          enabledBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: HexColor("#443C64")),
                          ),
                        ),
                      ),
                    )
                  ],
                ),
                const SizedBox(
                  height: 20,
                ),
                Row(
                  children: [
                    Expanded(
                      child: InkWell(
                        onTap: () {
                          Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => const MainScreen()));
                        },
                        child: Container(
                          height: 45,
                          padding: const EdgeInsets.all(10.0),
                          decoration: const BoxDecoration(
                            borderRadius:
                                BorderRadius.all(Radius.circular(20.0)),
                            gradient: LinearGradient(
                              colors: [
                                Color(0xFF10053F),
                                Color(0xFF310664),
                                Color(0xFF3C0363),
                                Color(0xFF79069D),
                              ],
                              begin: FractionalOffset(0.0, 0.0),
                              end: FractionalOffset(0.0, 1.0),
                              stops: [
                                0.0,
                                25.0,
                                50.0,
                                100.0,
                              ],
                              tileMode: TileMode.clamp,
                            ),
                          ),
                          child: const Center(
                            child: Text(
                              "Continue",
                              style: TextStyle(color: Colors.white),
                            ),
                          ),
                        ),
                      ),
                    )
                  ],
                ),
                const SizedBox(
                  height: 20,
                ),
                Row(
                  children: const [
                    Expanded(
                        child: Divider(
                      color: Colors.black,
                    )),
                    SizedBox(
                      width: 10,
                    ),
                    Text("or"),
                    SizedBox(
                      width: 10,
                    ),
                    Expanded(
                        child: Divider(
                      color: Colors.black,
                    )),
                  ],
                ),
                const SizedBox(
                  height: 20,
                ),
                Row(
                  children: [
                    Expanded(
                        child: SignInButton(
                      Buttons.Google,
                      text: "Continue with Google",
                      onPressed: () {
                        signInWithGoogle();
                      },
                    ))
                  ],
                ),
                const SizedBox(
                  height: 20,
                ),
                Row(
                  children: [
                    Expanded(
                        child: SignInButton(
                      Buttons.Apple,
                      text: "Continue with Apple",
                      onPressed: () {},
                    ))
                  ],
                )
              ],
            ),
          ),
        ),
      ),
    );
  }
}
