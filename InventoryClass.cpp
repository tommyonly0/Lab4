#include <iostream>
#include <iomanip>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }
    Inventory(int number, double c, int q) {
        itemNumber = number;
        cost = c;
        quantity = q;
        setTotalCost();
    }
    void setItemNumber(int number) {
        if (number >= 0) {
            itemNumber = number;
        } else {
            cout << "Error: item number cannot be negative\n";
        }
    }
    void setQuantity(int q) {
        if (q >= 0) {
            quantity = q;
            setTotalCost();
        } else {
            cout << "Error: quantity cannot be negative\n";
        }
    }
    void setCost(double c) {
        if (c >= 0.0) {
            cost = c;
            setTotalCost();
        } else {
            cout << "Error: cost cannot be negative\n";
        }
    }
    void setTotalCost() {
        totalCost = quantity * cost;
    }
    int getItemNumber() const {
        return itemNumber;
    }
    int getQuantity() const {
        return quantity;
    }
    double getCost() const {
        return cost;
    }
    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    Inventory item1(1001, 2.5, 10);
    Inventory item2;
    item2.setItemNumber(1002);
    item2.setCost(1.75);
    item2.setQuantity(20);

    cout << "Item 1:\n";
    cout << "Item number: " << item1.getItemNumber() << endl;
    cout << "Quantity on hand: " << item1.getQuantity() << endl;
    cout << "Cost per unit: $" << fixed << setprecision(2) << item1.getCost() << endl;
    cout << "Total inventory cost: $" << fixed << setprecision(2) << item1.getTotalCost() << endl;

    cout << "\nItem 2:\n";
    cout << "Item number: " << item2.getItemNumber() << endl;
    cout << "Quantity on hand: " << item2.getQuantity() << endl;
    cout << "Cost per unit: $" << fixed << setprecision(2) << item2.getCost() << endl;
    cout << "Total inventory cost: $" << fixed << setprecision(2) << item2.getTotalCost() << endl;

    return 0;
}
