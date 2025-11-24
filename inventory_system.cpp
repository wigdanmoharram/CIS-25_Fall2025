#include <iostream>
#include <string>
using namespace std;

// Item class
class Item {
public:
    string name;
    int quantity;

    Item() {
        name = "";
        quantity = 0;
    }
};

// Function to search for an item by name
void searchItem(Item inventory[], int size, string searchName) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (inventory[i].name == searchName) {
            cout << "Item found: " << inventory[i].name
                 << ", Quantity: " << inventory[i].quantity << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found." << endl;
    }
}

int main() {
    const int SIZE = 5;      // Number of items
    Item inventory[SIZE];     // Array of Item objects

    // Input items
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter name of item " << i+1 << ": ";
        cin >> inventory[i].name;
        cout << "Enter quantity: ";
        cin >> inventory[i].quantity;
    }

    // Display all items
    cout << "\nInventory List:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << inventory[i].name << " - " << inventory[i].quantity << endl;
    }

    // Search for an item
    string searchName;
    cout << "\nEnter item name to search: ";
    cin >> searchName;
    searchItem(inventory, SIZE, searchName);

    return 0;
}
