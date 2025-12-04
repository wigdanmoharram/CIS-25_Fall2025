#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

int binarySearch(Item* arr, int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].id == target)
            return mid;
        else if (arr[mid].id < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item* inventory = new Item[n];

    // Input items
    for (int i = 0; i < n; i++) {
        cout << "Enter name for item " << i + 1 << ": ";
        cin >> inventory[i].name;
        cout << "Enter ID for item " << i + 1 << ": ";
        cin >> inventory[i].id;
    }

    // Search for an item by ID
    int searchId;
    cout << "\nEnter ID to search: ";
    cin >> searchId;

    int index = binarySearch(inventory, n, searchId);
    if (index != -1)
        cout << "Item found: " << inventory[index].name << " with ID " << inventory[index].id << endl;
    else
        cout << "Item not found.\n";

    // Free memory
    delete[] inventory;

    return 0;
}
