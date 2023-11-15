#pragma once

#include <iostream>
#include <vector>
#include <memory>

#include "./Item.hpp"

using namespace std;

class MasterBaker
{
    public:
        MasterBaker();

        void bake(vector<shared_ptr<Item>> items);
};

