import 'package:artryon/ar_view.dart';
import 'package:artryon/home.dart';
import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:permission_handler/permission_handler.dart';

class MainScreen extends StatefulWidget {
  const MainScreen({Key? key}) : super(key: key);

  @override
  _MainScreenState createState() => _MainScreenState();
}

class _MainScreenState extends State<MainScreen>
    with SingleTickerProviderStateMixin {
  int _selectedIndex = 0;
  late TabController tabController;

  @override
  void initState() {
    super.initState();
    tabController = TabController(
      length: 5,
      initialIndex: 0,
      vsync: this,
    );

    tabController.addListener(() {
      if (_selectedIndex == 2) {
        manageCamera();
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.transparent,
        elevation: 0,
        leading: const Icon(
          Icons.menu,
          color: Colors.black,
        ),
        actions: const [
          Padding(
            padding: EdgeInsets.all(20.0),
            child: Icon(
              Icons.search,
              color: Colors.black,
            ),
          )
        ],
      ),
      body: Column(children: [
        Expanded(
          child: TabBarView(
            controller: tabController,
            children: const [
              Home(),
              Text("Cart"),
              Text("TryOn"),
              Text("Liked"),
              Text("Profile"),
            ],
          ),
        ),
      ]),
      bottomNavigationBar: BottomNavigationBar(
        selectedItemColor: HexColor("#443C64"),
        type: BottomNavigationBarType.fixed,
        items: const [
          BottomNavigationBarItem(
            icon: Icon(Icons.home),
            label: "Home",
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.shopping_basket),
            label: "Cart",
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.camera),
            label: "Try Ar",
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.favorite),
            label: "Liked",
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.person),
            label: "Profile",
          )
        ],
        currentIndex: _selectedIndex,
        onTap: (index) {
          setState(() {
            _selectedIndex = index;
            tabController.index = index;
          });
        },
      ),
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
