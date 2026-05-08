#include <iostream>
#include "Order.h"
using namespace std;

int main() {
    Order o1("2026-05-08", "12:30", 20, "Pizza + Cola", 250.0);
    Order o2("2026-05-08", "12:45", 15, "Burger", 120.0);

    o1.print();
    o2.print();

    cout << "Total orders: " << Order::getTotalOrders() << endl;

    return 0;
}
