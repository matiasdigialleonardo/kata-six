#include "../include/Order.hpp"

Order::Order(int code)
: _code{code} {}

void Order::setCustomer(shared_ptr<Customer> customer)
{
    _customer = customer;
}

void Order::setMasterBaker(shared_ptr<MasterBaker> masterBaker)
{
    _masterBaker = masterBaker;
}

void Order::addItem(shared_ptr<Item> item)
{
    _items.push_back(item);
}

void Order::prepareOrder()
{
    _masterBaker->bake(_items);
}

void Order::sendNotification(shared_ptr<Notification> notification)
{
    bool allItemsReady = true;

    for (const auto& item : _items)
    {
        if (item->getStatus() != "Ready") {
            // If any item is not ready, set allItemsReady to false and exit the loop.
            allItemsReady = false;
            break;
        }
    }

    // If all items are ready, call update status.
    if (allItemsReady)
    {
        notification->updateStatus();
    }   
}