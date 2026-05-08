#pragma once

#include <string>
using namespace std;

class Order {
private:

    static int orderCounter;

    string orderDate;
    string orderTime;
    int preparationTime;
    string description;
    double price;
    int orderNumber;

public:
    Order(string date, string time, int prepTime, string desc, double pr);

    string getDate() const;
    string getTime() const;
    int getPreparationTime() const;
    string getDescription() const;
    double getPrice() const;
    int getOrderNumber() const;

    static int getTotalOrders();

    void print() const;
};

