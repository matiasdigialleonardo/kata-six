#pragma once

#include <iostream>
#include <memory>

#include "Product.hpp"

using namespace std;

class Item
{
    public:
        Item(shared_ptr<Product> _product);

        void changeStatus();
        string getStatus();

    private:
        string _status = "Not ready";
        shared_ptr<Product> _product;
};