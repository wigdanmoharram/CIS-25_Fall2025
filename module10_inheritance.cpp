#include <iostream>
using namespace std;

// Base class
class User {
public:
    virtual void accessLevel() {
        cout << "General Access" << endl;
    }
};

// Derived from User
class Employee : public User {
public:
    void accessLevel() override {
        cout << "Employee Access" << endl;
    }
};

// Derived from Employee
class InventoryManager : public Employee {
public:
    void accessLevel() override {
        cout << "Full Inventory Management Access" << endl;
    }
};

int main() {
    InventoryManager mgr;  // Create the object
    mgr.accessLevel();     // Calls overridden method
    return 0;
}
