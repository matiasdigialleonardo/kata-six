#pragma once

#ifndef NOTIFICATION_HPP
#define NOTIFICATION_HPP


#include <iostream>
#include <memory>

using namespace std;

class Notification
{
    public:
        virtual void updateStatus() = 0;
};

#endif