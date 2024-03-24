#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Product.h"

using namespace std;

class Reporting {
public:

    void RegisterTovas(vector<Product>& regTovar, vector <Product>& shop) {
        for (Product& product1 : regTovar) {
            bool found = false;
            for (Product& product2 : shop) {
                if (product1.getName() == product2.getName()) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                shop.push_back(product1);
            }
        }
    }

    void Vidvantagena(vector<Product>& vidvTovar, vector <Product>& shop) {
        for (auto it = shop.begin(); it != shop.end();) {
            Product& product1 = *it;
            bool found = false;
            for (Product& product2 : vidvTovar) {
                if (product1.getName() == product2.getName()) {
                    found = true;
                    break;
                }
            }
            if (found) {
                it = shop.erase(it);
            }
            else {
                ++it;
            }
        }
    }


    void ShowInfo(vector <Product>& shop) {
        for (Product product : shop) {
            product.PrintInfo();
        }
    }
};