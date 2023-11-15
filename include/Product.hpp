#pragma once

#include <iostream>

using namespace std;

class Product
{
    public:
        Product(string name);

        string getName();

    private:
        string _name;

};