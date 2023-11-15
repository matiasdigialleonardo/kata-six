#pragma once

#include "Notification.hpp"

class FacebookNotification : public Notification
{
    public:
        FacebookNotification() {};

        void updateStatus()
        {
            cout << "Message sent via facebook: Your order is ready!" << endl;
        }
};