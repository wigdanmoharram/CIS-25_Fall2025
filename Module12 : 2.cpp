#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Passenger class stores info about each passenger
class Passenger {
public:
    string name;
    int age;
    string sex;
    int pclass;
    string embarked;

    // Constructor to initialize passenger data
    Passenger(string n, int a, string s, int pc, string e) {
        name = n;
        age = a;
        sex = s;
        pclass = pc;
        embarked = e;
    }

    // Function to display passenger info in readable format
    void printInfo() {
        cout.width(15); cout << left << name;
        cout.width(5);  cout << age;
        cout.width(8);  cout << sex;
        cout.width(7);  cout << pclass;
        cout.width(10); cout << embarked << endl;
    }
};

int main() {
    // Create a vector to store passengers (simulating reading from CSV)
    vector<Passenger> passengers;

    // Adding 10 sample entries manually (replace this with CSV reading if needed)
    passengers.push_back(Passenger("John Doe", 22, "male", 3, "S"));
    passengers.push_back(Passenger("Jane Smith", 28, "female", 1, "C"));
    passengers.push_back(Passenger("Alice Brown", 35, "female", 2, "Q"));
    passengers.push_back(Passenger("Bob White", 19, "male", 3, "S"));
    passengers.push_back(Passenger("Charlie Black", 40, "male", 1, "C"));
    passengers.push_back(Passenger("Diana Green", 31, "female", 2, "Q"));
    passengers.push_back(Passenger("Ethan Blue", 50, "male", 1, "S"));
    passengers.push_back(Passenger("Fiona Gray", 18, "female", 3, "S"));
    passengers.push_back(Passenger("George Red", 27, "male", 2, "C"));
    passengers.push_back(Passenger("Hannah Gold", 33, "female", 1, "C"));

    // Print header
    cout.width(15); cout << left << "Name";
    cout.width(5);  cout << "Age";
    cout.width(8);  cout << "Sex";
    cout.width(7);  cout << "Class";
    cout.width(10); cout << "Embarked" << endl;
    cout << "--------------------------------------------" << endl;

    // Loop through passengers and display info
    for (int i = 0; i < passengers.size(); i++) {
        passengers[i].printInfo();
    }

    return 0;
}
