#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    // Constructor
    Item(string n = "", int q = 0) {
        name = n;
        quantity = q;
    }

    // Method to save item to a file
    void saveToFile() {
        ofstream outFile("items.txt", ios::app); // Append mode
        if(outFile.is_open()) {
            outFile << name << "," << quantity << endl;
            outFile.close();
            cout << "Item saved to file.\n";
        } else {
            cout << "Error opening file!\n";
        }
    }

    // Method to read all items from file
    void loadFromFile() {
        ifstream inFile("items.txt");
        string line;

        if(inFile.is_open()) {
            cout << "\nItems in file:\n";
            while(getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        } else {
            cout << "Error opening file!\n";
        }
    }
};

int main() {
    Item newItem;

    cout << "Enter item name: ";
    cin >> newItem.name;
    cout << "Enter quantity: ";
    cin >> newItem.quantity;

    newItem.saveToFile();      // Save data to file
    newItem.loadFromFile();    // Display all saved data

    return 0;
}
