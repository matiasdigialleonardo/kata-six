#include "../include/Customer.hpp"

Customer::Customer() {}

shared_ptr<Notification> Customer::createNotification(string notificationType)
{
    if (notificationType == "WP")
    {
        return make_shared<WhatsappNotification>();
    }
    else if (notificationType == "IG")
    {
        return make_shared<InstagramNotification>();
    }
    else if (notificationType == "FB")
    {
        return make_shared<FacebookNotification>();
    }

    return nullptr;
}