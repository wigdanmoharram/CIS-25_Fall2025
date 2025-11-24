#include <iostream>
#include <fstream>   // For file I/O
#include <string>    // For string type
using namespace std;

// Class definition
class Item {
public:
    string name;
    int quantity;

    // Constructor
    Item(string n, int q) {
        name = n;
        quantity = q;
    }

    // Function to save item to a file
    void saveToFile() {
        ofstream outFile("inventory.txt", ios::app); // Append mode
        if(outFile.is_open()) {
            outFile << name << " " << quantity << endl;
            outFile.close();
            cout << "Item saved to file.\n";
        } else {
            cout << "Error opening file!\n";
        }
    }

    // Function to read all items from file
    static void readFromFile() {
        ifstream inFile("inventory.txt");
        string itemName;
        int qty;

        if(inFile.is_open()) {
            cout << "\nItems in inventory:\n";
            while(inFile >> itemName >> qty) {
                cout << "Item: " << itemName << ", Quantity: " << qty << endl;
            }
            inFile.close();
        } else {
            cout << "Error opening file!\n";
        }
    }
};

int main() {
    string name;
    int quantity;

    cout << "Enter item name: ";
    cin >> name;
    cout << "Enter quantity: ";
    cin >> quantity;

    Item newItem(name, quantity);
    newItem.saveToFile();       // Save to file
    Item::readFromFile();       // Display all items

    return 0;
}
