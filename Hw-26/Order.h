#pragma once

#include <string>

class Order {
private:
    static int totalOrders;   

    std::string date;
    std::string time;
    int duration;             
    std::string description;
    double price;
    int orderNumber;

public:
    Order(std::string date, std::string time, int duration, std::string description, double price);

    std::string getDate() const;
    std::string getTime() const;
    int getDuration() const;
    std::string getDescription() const;
    double getPrice() const;
    int getOrderNumber() const;

    int getReadyTimeInMinutes() const; 

    void display() const;
};

