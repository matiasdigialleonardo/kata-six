#include "../include/MasterBaker.hpp"

MasterBaker::MasterBaker(){};

void MasterBaker::bake(vector<shared_ptr<Item>> items)
{
    for (const auto& item : items)
    {
        item->changeStatus();
    }
}