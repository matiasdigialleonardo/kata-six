#pragma once

#include "Notification.hpp"

class WhatsappNotification : public Notification
{
    public:
        WhatsappNotification() {};

        void updateStatus()
        {
            cout << "Message sent via whatsapp: Your order is ready! " << endl;
        }
};