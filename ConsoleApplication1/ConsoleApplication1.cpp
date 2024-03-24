#include <iostream>
#include <vector>
#include <string>

#include "Money.h"
#include "Reporting.h"
#include "Product.h"
#include "Warehouse.h"

using namespace std;

int main() {
    Money a1(112.3);

    cout << a1.getPrice() << endl;
    a1.setPrice(11.23);
    a1.print();

    Product b2(156.3, "Kovbasa", 1, 12);

    b2.PlusPrice(6.1);
    b2.MinusPrice(5.1);

    cout << b2.getPrice() << endl;
    cout << b2.getName() << endl;
    cout << b2.getCount() << endl;
    cout << b2.getData() << endl;
    
    
    b2.setPrice(123.1);
    b2.setName("Milk");
    b2.setCount(3);
    b2.setData(11);

    b2.PrintInfo();

    Warehouse shop1;

    shop1.addProduct(5, "egg", 1, 12);
    shop1.addProduct(56, "milk", 1, 2);
    shop1.addProduct(104, "Cake", 1, 23);
    shop1.addProduct(43, "Tee", 1, 1);
    shop1.addProduct(89, "Fish", 3, 5);
    shop1.addProduct(4353342, "Kowbasa", 1, 99);

    for (Product product : shop1.getProducts()) {
        product.MinusPrice(1);
    }

    shop1.DeleteProduct("egg");
    shop1.getProductWithName("egg");

    Warehouse zakaz1;

    zakaz1.addProduct(56, "Jam", 1, 12);
    zakaz1.addProduct(61, "juice", 1, 12);
    zakaz1.addProduct(99, "Potato", 15, 45);
    zakaz1.addProduct(29, "Kvas", 1, 456);


    Reporting f3;



    f3.ShowInfo(shop1.getProducts());

    f3.Vidvantagena(zakaz1.getProducts(), zakaz1.getProducts());
    f3.RegisterTovas(zakaz1.getProducts(), zakaz1.getProducts());
    return 0;
}