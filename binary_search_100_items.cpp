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
            return mid; // found
        else if (arr[mid].id < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // not found
}

int main() {
    const int n = 100;
    Item* inventory = new Item[n];

    // Populate sample data
    for (int i = 0; i < n; i++) {
        inventory[i].id = i + 1;
        inventory[i].name = "Item" + to_string(i + 1);
    }

    int searchId;
    cout << "Enter ID to search: ";
    cin >> searchId;

    int index = binarySearch(inventory, n, searchId);

    if (index != -1)
        cout << "Item found: " << inventory[index].name << " with ID " << inventory[index].id << endl;
    else
        cout << "Item not found.\n";

    delete[] inventory;
    return 0;
}
