#pragma once

#include <iostream>
#include <memory>
#include "../lib_notification/Notification.hpp"
#include "../lib_notification/WhatsappNotification.hpp"
#include "../lib_notification/InstagramNotification.hpp"
#include "../lib_notification/FacebookNotification.hpp"

using namespace std;

class Customer
{
    public:
        Customer();

        shared_ptr<Notification> createNotification(string notificationType);
};