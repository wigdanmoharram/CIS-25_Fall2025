#include <iostream>
using namespace std;

// Function to display the menu
void showMenu() {
    cout << "1. Add Item\n2. View Items\n3. Exit\n";
}

// Function for option 1
void addItem() {
    cout << "Item added!\n";
}

// Function for option 2
void viewItems() {
    cout << "Displaying items...\n";
}

int main() {
    int option;

    do {
        showMenu();         // Show the menu
        cout << "Choose an option: ";
        cin >> option;

        if (option == 1)
            addItem();      // Call function to add item
        else if (option == 2)
            viewItems();    // Call function to view items
        else if (option == 3)
            cout << "Exiting...\n";
        else
            cout << "Invalid option.\n";

    } while (option != 3);  // Repeat until user chooses 3 (Exit)

    return 0;
}
