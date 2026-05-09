#include "Order.h"
#include <iostream>
#include <sstream>

int Order::totalOrders = 0;

Order::Order(std::string date, std::string time, int duration,
    std::string description, double price)
    : date(date), time(time), duration(duration),
    description(description), price(price)
{
    orderNumber = ++totalOrders;
}

std::string Order::getDate() const { return date; }
std::string Order::getTime() const { return time; }
int Order::getDuration() const { return duration; }
std::string Order::getDescription() const { return description; }
double Order::getPrice() const { return price; }
int Order::getOrderNumber() const { return orderNumber; }

int Order::getReadyTimeInMinutes() const {
    int hours, minutes;
    char colon;

    std::stringstream ss(time);
    ss >> hours >> colon >> minutes;

    return hours * 60 + minutes + duration;
}

void Order::display() const {
    std::cout << "Order #" << orderNumber << "\n"
        << "Date: " << date << "\n"
        << "Time: " << time << "\n"
        << "Duration: " << duration << " min\n"
        << "Description: " << description << "\n"
        << "Price: $" << price << "\n"
        << "------------------------\n";
}