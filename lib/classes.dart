class Category {
  String image;
  String name;

  Category(this.image, this.name);
}

class Item {
  String image;
  String name;
  String price;

  Item(this.image, this.name, this.price);
}

List<Category> categories = [
  Category("tshirt.png", "T-Shirt"),
  Category("dress_2.png", "Dress"),
  Category("pant_2.png", "Pant"),
  Category("shoes.png", "High heels"),
  Category("jacket.png", "Jacket")
];

List<Item> items = [
  Item("jacket.png", "Jacket", "560"),
  Item("dress_4.png", "Multicoloured dress", "420"),
  Item("dress_5.png", "Simple dress", "660"),
  Item("dress_7.png", "Red dress", "1000"),
  Item("dress_6.png", "Raged dress", "800")
];
