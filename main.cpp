#include <iostream>
#include <memory>
#include <vector>

#include "./include/Item.hpp"
#include "./include/MasterBaker.hpp"
#include "./include/Product.hpp"
#include "./include/Order.hpp"
#include "./include/Customer.hpp"
#include "./lib_notification/Notification.hpp"
#include "./lib_notification/WhatsappNotification.hpp"


using namespace std;

int main()
{
    // Create a customer.
    auto customer1 = make_shared<Customer>();
    // The customer "makes" a notification.
    auto wpNotification = customer1->createNotification("WP");

    // Create a master baker.
    auto masterBaker1 = make_shared<MasterBaker>();

    // Create some products.
    auto cake = make_shared<Product>("Cake");
    auto cookie = make_shared<Product>("Cookie");

    // Create some items, in an actual implementation the client would have a menu to select the products.
    auto item1 = make_shared<Item>(cake);
    auto item2 = make_shared<Item>(cookie);

    // Create an order with code 001
    auto order = make_shared<Order>(001);

    // Set the customer, baker, and items of the order.
    order->setCustomer(customer1);
    order->setMasterBaker(masterBaker1);
    order->addItem(item1);
    order->addItem(item2);

    // Preapre the order, this will call the master baker to bake the products.
    order->prepareOrder();

    // Once all the items are ready, send the notification to the client with the type of notification it created.
    order->sendNotification(wpNotification);

    return 0;
}