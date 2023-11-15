#include "../include/Product.hpp"

Product::Product(std::string name)
: _name{name} {};

string Product::getName()
{
    return _name;
}