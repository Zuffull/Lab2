#pragma once
#include <iostream>

using namespace std;

class Money {
private:
    double price;

public:
    Money(double price1 = 0.0) : price(price1) {};

    double getPrice() {
        return price;
    }

    void setPrice(double price1) {
        price = price1;
    }

    void print() {
        cout << "$" << price << endl;
    }

};
