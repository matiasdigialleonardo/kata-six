#pragma once

#include "Notification.hpp"

class InstagramNotification : public Notification
{
    public:
        InstagramNotification() {};

        void updateStatus()
        {
            cout << "Message sent via instagram: Your order is ready! " << endl;
        }
};