import 'package:artryon/classes.dart';
import 'package:artryon/descryption_screen.dart';
import 'package:artryon/log_in.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_staggered_grid_view/flutter_staggered_grid_view.dart';
import 'package:hexcolor/hexcolor.dart';

import 'ar_view.dart';

class MainScreen extends StatefulWidget {
  const MainScreen({Key? key}) : super(key: key);

  @override
  _MainScreenState createState() => _MainScreenState();
}

class _MainScreenState extends State<MainScreen> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: const Text("TryOn"),
        flexibleSpace: Container(
          decoration: BoxDecoration(
              gradient: LinearGradient(
                  begin: Alignment.topCenter,
                  end: Alignment.bottomCenter,
                  colors: [
                HexColor("10053F"),
                HexColor("310664"),
                HexColor("3C0363"),
                HexColor("79069D"),
              ])),
        ),
        leading: Padding(
          padding: const EdgeInsets.all(15.0),
          child: InkWell(
            onTap: () async {
              await FirebaseAuth.instance.signOut();
              Navigator.of(context).pushAndRemoveUntil(
                  MaterialPageRoute(builder: (context) => const LogIn()),
                  (route) => false);
            },
            child: Image.asset(
              "assets/splash.png",
              scale: 0.5,
            ),
          ),
        ),
      ),
      body: Container(
          width: MediaQuery.of(context).size.width,
          height: MediaQuery.of(context).size.height,
          padding: const EdgeInsets.only(left: 10.0, right: 10.0, top: 10.0),
          child:
              Column(crossAxisAlignment: CrossAxisAlignment.start, children: [
            const Text(
              "Try Dresses",
              style: TextStyle(fontSize: 18, fontWeight: FontWeight.w700),
            ),
            const SizedBox(
              height: 10,
            ),
            const Text("10 Products"),
            const SizedBox(
              height: 10,
            ),
            const Divider(
              thickness: 2,
            ),
            Expanded(
              child: MasonryGridView.count(
                crossAxisCount: 2,
                mainAxisSpacing: 4,
                crossAxisSpacing: 4,
                itemCount: items.length,
                itemBuilder: (context, index) {
                  Item item = items[index];
                  return Container(
                    padding: const EdgeInsets.all(10.0),
                    decoration: const BoxDecoration(
                      color: Colors.black12,
                      borderRadius: BorderRadius.all(Radius.circular(10.0)),
                    ),
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.start,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      children: [
                        InkWell(
                          onTap: () {
                            Navigator.of(context).push(MaterialPageRoute(
                                builder: (context) =>
                                    ProductDescription(index: index)));
                          },
                          child: Image.asset(
                            "assets/${item.images[0]}",
                            fit: BoxFit.contain,
                            height: 200,
                          ),
                        ),
                        Text(item.name),
                        const SizedBox(
                          height: 10,
                        ),
                        Container(
                          height: 35,
                          decoration: BoxDecoration(
                              borderRadius: BorderRadius.circular(10.0),
                              gradient: LinearGradient(
                                  begin: Alignment.topCenter,
                                  end: Alignment.bottomCenter,
                                  colors: [
                                    HexColor("10053F"),
                                    HexColor("310664"),
                                    HexColor("3C0363"),
                                    HexColor("79069D"),
                                  ])),
                          child: ElevatedButton(
                              style: ElevatedButton.styleFrom(
                                  primary: Colors.transparent,
                                  elevation: 0,
                                  shape: RoundedRectangleBorder(
                                      borderRadius:
                                          BorderRadius.circular(10.0))),
                              onPressed: () {
                                manageCamera();
                              },
                              child: Row(
                                mainAxisAlignment: MainAxisAlignment.center,
                                children: [
                                  Image.asset(
                                    "assets/splash.png",
                                    width: 25,
                                    height: 25,
                                  ),
                                  const SizedBox(
                                    width: 10,
                                  ),
                                  const Text("TRY ON")
                                ],
                              )),
                        )
                      ],
                    ),
                  );
                },
              ),
            ),
          ])),
    );
  }

  void initCallback() {
    Navigator.push(
        context,
        PageRouteBuilder(
          pageBuilder: (context, animation1, animation2) => ArView(
            isInit: false,
            initCallback: () {},
          ),
          transitionDuration: Duration.zero,
          reverseTransitionDuration: Duration.zero,
        ));
  }

  void manageCamera() async {
    Navigator.of(context).push(MaterialPageRoute(
        builder: (context) => ArView(
              isInit: true,
              initCallback: initCallback,
            )));
    // var status = await Permission.camera.status;
    // if (status.isGranted) {
    //   Navigator.of(context)
    //       .push(MaterialPageRoute(builder: (context) => const ArView()));
    // } else {
    //   var status = await Permission.camera.request();
    //   if (status.isGranted) {
    //     Navigator.of(context)
    //         .push(MaterialPageRoute(builder: (context) => const ArView()));
    //   }
    // }
  }
}
