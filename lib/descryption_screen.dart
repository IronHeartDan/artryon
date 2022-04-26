import 'package:artryon/classes.dart';
import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:page_view_indicators/circle_page_indicator.dart';

import 'ar_view.dart';

class ProductDescription extends StatefulWidget {
  int index;
  ProductDescription({Key? key, required this.index}) : super(key: key);

  @override
  State<ProductDescription> createState() => _ProductDescriptionState();
}

class _ProductDescriptionState extends State<ProductDescription> {
  String currentSize = "L";
  int pics = 0;
  final _currentPageNotifier = ValueNotifier<int>(0);

  @override
  void initState() {
    super.initState();
    pics = items[widget.index].images.length;
  }

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
        actions: [
          InkWell(
              onTap: () {},
              child: const Padding(
                padding: EdgeInsets.all(8.0),
                child: Icon(Icons.favorite),
              ))
        ],
      ),
      body: SizedBox(
          width: MediaQuery.of(context).size.width,
          height: MediaQuery.of(context).size.height,
          child: Column(
            children: [
              Expanded(
                  child: pics > 1
                      ? Stack(
                          children: [
                            PageView.builder(
                              onPageChanged: (int index) {
                                _currentPageNotifier.value = index;
                              },
                              itemCount: pics,
                              itemBuilder: (context, indexImage) {
                                return Image.asset(
                                    "assets/${items[widget.index].images[indexImage]}");
                              },
                            ),
                            Positioned(
                                bottom: 10,
                                left: 0,
                                right: 0,
                                child: _buildCircleIndicator())
                          ],
                        )
                      : Image.asset("assets/${items[widget.index].images[0]}")),
              Card(
                child: Padding(
                  padding: const EdgeInsets.all(20.0),
                  child: Column(
                    children: [
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            items[widget.index].name,
                            style: const TextStyle(fontSize: 20),
                          ),
                          Text(
                            "Rs.${items[widget.index].price}",
                            style: const TextStyle(fontWeight: FontWeight.bold),
                          )
                        ],
                      ),
                      const SizedBox(
                        height: 20,
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Expanded(
                            child: DropdownButtonHideUnderline(
                              child: DropdownButton(
                                  isExpanded: true,
                                  hint: const Text("Select Size"),
                                  icon: const Icon(Icons.arrow_downward),
                                  items: <String>['S', 'M', 'L', 'XL', 'XXL']
                                      .map<DropdownMenuItem<String>>(
                                          (String value) {
                                    return DropdownMenuItem<String>(
                                      value: value,
                                      child: Text(value),
                                    );
                                  }).toList(),
                                  onChanged: (value) {}),
                            ),
                          ),
                          const SizedBox(
                            width: 50,
                          ),
                          Expanded(
                              child: Container(
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
                          )),
                        ],
                      )
                    ],
                  ),
                ),
              )
            ],
          )),
    );
  }

  _buildCircleIndicator() {
    return Positioned(
      left: 0.0,
      right: 0.0,
      bottom: 0.0,
      child: Padding(
        padding: const EdgeInsets.all(8.0),
        child: CirclePageIndicator(
          itemCount: pics,
          currentPageNotifier: _currentPageNotifier,
        ),
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
