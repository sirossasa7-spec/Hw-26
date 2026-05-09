#include "Order.h"
#include <vector>



class OrdersSystem {
private:
    std::vector<Order> orders;

public:
    void addOrder(const Order& order);
    void sortOrders();
    void processNextOrder();
    void displayAll() const;
};


