#include "OrdersSystem.h"
#include <algorithm>
#include <iostream>

void OrdersSystem::addOrder(const Order& order) {
    orders.push_back(order);
}

void OrdersSystem::sortOrders() {
    std::sort(orders.begin(), orders.end(),
        [](const Order& a, const Order& b) {
            return a.getReadyTimeInMinutes() < b.getReadyTimeInMinutes();
        });
}

void OrdersSystem::processNextOrder() {
    if (orders.empty()) {
        std::cout << "No orders available.\n";
        return;
    }

    sortOrders();

    std::cout << "Processing order:\n";
    orders.front().display();

    orders.erase(orders.begin());
}

void OrdersSystem::displayAll() const {
    if (orders.empty()) {
        std::cout << "No orders.\n";
        return;
    }

    for (const auto& order : orders) {
        order.display();
    }
}