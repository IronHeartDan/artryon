import 'package:flutter/material.dart';

import 'classes.dart';

class Home extends StatefulWidget {
  const Home({Key? key}) : super(key: key);

  @override
  _HomeState createState() => _HomeState();
}

class _HomeState extends State<Home> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Padding(
          padding: const EdgeInsets.all(8.0),
          child: SingleChildScrollView(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                const Text("Explore"),
                const SizedBox(
                  height: 10,
                ),
                SizedBox(
                    width: double.infinity,
                    height: 120,
                    child: ListView.builder(
                        itemCount: categories.length,
                        scrollDirection: Axis.horizontal,
                        itemBuilder: (context, index) {
                          Category cat = categories.elementAt(index);
                          return Container(
                            margin: const EdgeInsets.all(10.0),
                            padding: const EdgeInsets.all(10.0),
                            child: Center(
                              child: Column(
                                children: [
                                  Image.asset(
                                    "assets/${cat.image}",
                                    width: 50,
                                  ),
                                  const SizedBox(
                                    height: 10,
                                  ),
                                  Text(cat.name)
                                ],
                              ),
                            ),
                          );
                        })),
                const SizedBox(
                  height: 20,
                ),
                Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: const [
                    Text(
                      "Trending",
                      style: TextStyle(fontWeight: FontWeight.bold),
                    ),
                    Icon(Icons.arrow_forward)
                  ],
                ),
                const Text("Try trending outfits that suits you "),
                SizedBox(
                    width: double.infinity,
                    height: 250,
                    child: ListView.builder(
                        itemCount: items.length,
                        scrollDirection: Axis.horizontal,
                        itemBuilder: (context, index) {
                          Item item = items.elementAt(index);
                          return Container(
                            margin: const EdgeInsets.all(10.0),
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.start,
                              children: [
                                Container(
                                  width: 150,
                                  height: 180,
                                  padding: const EdgeInsets.all(25.0),
                                  decoration: const BoxDecoration(
                                    color: Colors.white,
                                    borderRadius:
                                        BorderRadius.all(Radius.circular(10.0)),
                                  ),
                                  child: Center(
                                    child: Column(
                                      children: [
                                        Image.asset(
                                          "assets/${item.image}",
                                          width: 100,
                                        ),
                                      ],
                                    ),
                                  ),
                                ),
                                const SizedBox(
                                  height: 10,
                                ),
                                Text(item.name),
                                Text(item.price),
                              ],
                            ),
                          );
                        })),
                const SizedBox(
                  height: 20,
                ),
                Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: const [
                    Text(
                      "Trending",
                      style: TextStyle(fontWeight: FontWeight.bold),
                    ),
                    Icon(Icons.arrow_forward)
                  ],
                ),
                const Text("Try trending outfits that suits you "),
                SizedBox(
                    width: double.infinity,
                    height: 250,
                    child: ListView.builder(
                        itemCount: 10,
                        scrollDirection: Axis.horizontal,
                        itemBuilder: (context, index) {
                          return Container(
                            margin: const EdgeInsets.all(10.0),
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.start,
                              children: [
                                Container(
                                  width: 150,
                                  height: 180,
                                  padding: const EdgeInsets.all(25.0),
                                  decoration: const BoxDecoration(
                                    color: Colors.white,
                                    borderRadius:
                                        BorderRadius.all(Radius.circular(10.0)),
                                  ),
                                  child: Column(
                                    mainAxisAlignment: MainAxisAlignment.center,
                                    children: const [
                                      Icon(Icons.shop),
                                      SizedBox(
                                        height: 10,
                                      ),
                                      Text("Item")
                                    ],
                                  ),
                                ),
                                const SizedBox(
                                  height: 10,
                                ),
                                const Text("Item"),
                                const Text("Price"),
                              ],
                            ),
                          );
                        })),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
