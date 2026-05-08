#include "Order.h"
#include <iostream>

int Order::orderCounter = 0;

Order::Order(string date, string time, int prepTime, string desc, double pr) {
    orderDate = date;
    orderTime = time;
    preparationTime = prepTime;
    description = desc;
    price = pr;

    orderCounter++;
    orderNumber = orderCounter;
}

string Order::getDate() const {
    return orderDate;
}

string Order::getTime() const {
    return orderTime;
}

int Order::getPreparationTime() const {
    return preparationTime;
}

string Order::getDescription() const {
    return description;
}

double Order::getPrice() const {
    return price;
}

int Order::getOrderNumber() const {
    return orderNumber;
}

int Order::getTotalOrders() {
    return orderCounter;
}

void Order::print() const {
    cout << "Order #" << orderNumber << endl;
    cout << "Date: " << orderDate << endl;
    cout << "Time: " << orderTime << endl;
    cout << "Preparation Time: " << preparationTime << " min" << endl;
    cout << "Description: " << description << endl;
    cout << "Price: " << price << " грн" << endl << endl;
}