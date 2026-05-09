#include "OrdersSystem.h"
#include <iostream>
using namespace std;

int main() {
    OrdersSystem system;

    system.addOrder(Order("2026-05-09", "10:30", 20, "Pizza", 12.5));
    system.addOrder(Order("2026-05-09", "10:10", 15, "Burger", 8.0));
    system.addOrder(Order("2026-05-09", "10:20", 10, "Coffee", 3.5));

    cout << "All orders:\n";
    system.displayAll();

    cout << "\nSorted & processing:\n";
    system.processNextOrder();

    cout << "\nRemaining orders:\n";
    system.displayAll();

    return 0;
}
