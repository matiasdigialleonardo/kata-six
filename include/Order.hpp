#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "Customer.hpp"
#include "Item.hpp"
#include "MasterBaker.hpp"
#include "../lib_notification/Notification.hpp"

using namespace std;

class Order
{
    public:
        Order(int code);

        void setCustomer(shared_ptr<Customer> customer);
        void setMasterBaker(shared_ptr<MasterBaker> masterBaker);
        void addItem(shared_ptr<Item> item);
        void prepareOrder();
        void sendNotification(shared_ptr<Notification> notification);

    private:
        int _code;
        shared_ptr<Customer> _customer;
        shared_ptr<MasterBaker> _masterBaker;
        vector<shared_ptr<Item>> _items;
};