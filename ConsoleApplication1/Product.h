#pragma once
#include <iostream>
#include <string>

#include "Money.h"

using namespace std;

class Product : public Money
{
private:
    Money Price;
    string Name;
    int Count;
    int Data;

public:

    Product(double price1, string name, int count, int data) {
        Name = name;
        Price.setPrice(price1);
        Count = count;
        Data = data;
    };

    bool operator==(const Product& other) const { // Додано const для гарантії не змінювання стану об'єкта
        return this->Name == other.Name;
    }

    void PlusPrice(double a) {
        Price.setPrice(Price.getPrice() + a);
    }

    void MinusPrice(double a) {
        Price.setPrice(Price.getPrice() - a);
    }

    void setPrice(double a) {
        Price.setPrice(a);
    }

    int getPrice() {
        return Price.getPrice();
    }

    void setName(string a) {
        Name = a;
    }

    string getName() {
        return Name;
    }

    void setCount(int a) {
        Count = a;
    }

    int getCount() {
        return Count;
    }

    void setData(int a) {
        Data = a;
    }

    int getData() {
        return Data;
    }

    void PrintInfo() {
        cout << endl << "Name: " << Name << endl << "Price: " << Price.getPrice() << endl << "Count: " << Count << endl << "Data: " << Data << endl;
    }

};