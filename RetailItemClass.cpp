#include <iostream>
#include <string>

using namespace std;

class RetailItem {
    private:
        string description;
        int unitsOnHand;
        double price;
    public:
        RetailItem(string desc, int units, double pr) {
            description = desc;
            unitsOnHand = units;
            price = pr;
        }
        
        void setDescription(string desc) {
            description = desc;
        }
        
        void setUnitsOnHand(int units) {
            unitsOnHand = units;
        }
        
        void setPrice(double pr) {
            price = pr;
        }
        
        string getDescription() const {
            return description;
        }
        
        int getUnitsOnHand() const {
            return unitsOnHand;
        }
        
        double getPrice() const {
            return price;
        }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.99);
    
    cout << "Item 1: " << item1.getDescription() << ", " << item1.getUnitsOnHand() << " units, $" << item1.getPrice() << endl;
    cout << "Item 2: " << item2.getDescription() << ", " << item2.getUnitsOnHand() << " units, $" << item2.getPrice() << endl;
    cout << "Item 3: " << item3.getDescription() << ", " << item3.getUnitsOnHand() << " units, $" << item3.getPrice() << endl;
    
    return 0;
}