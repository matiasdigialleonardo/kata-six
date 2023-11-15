#include "../include/Item.hpp"

Item::Item(std::shared_ptr<Product> product)
: _product{product} {}

void Item::changeStatus()
{
    _status = "Ready";
}

string Item::getStatus()
{
    return _status;
}