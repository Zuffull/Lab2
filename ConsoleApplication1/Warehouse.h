#pragma once

#include <string>
#include <iostream>
#include <vector>

#include "Product.h"

using namespace std;

class Warehouse
{
private:
	vector<Product>products;
public:

    void addProduct(int price, string name, int count, int data)
    {
        products.push_back(Product(price, name, count, data));
    }

    Product getProductWithName(string name) {
        for (Product product : products) {
            if (product.getName() == name) {
                return product;
            }
        }
    }

    vector <Product>& getProducts() {
        return products;
    }

    void DeleteProduct (string name) {
        for (Product product : products) {
            if (product.getName() == name) {
                products.erase(find(products.begin(), products.end(), product));
            }
        }
    }
};

