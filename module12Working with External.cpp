#include <iostream>
#include <string>
using namespace std;

class Passenger {
public:
    string name;
    int age;
    string sex;
    int pclass;
    string embarked;

    void printInfo() {
        cout << "Name: " << name
             << ", Age: " << age
             << ", Sex: " << sex
             << ", Class: " << pclass
             << ", Embarked: " << embarked << endl;
    }
};

int main() {
    // Small hardcoded sample instead of full CSV
    Passenger passengers[3];

    passengers[0] = {"John Smith", 22, "male", 3, "S"};
    passengers[1] = {"Jane Doe", 28, "female", 1, "C"};
    passengers[2] = {"Alice Brown", 35, "female", 2, "Q"};

    cout << "Displaying passenger info:\n";
    for (int i = 0; i < 3; i++) {
        passengers[i].printInfo();
    }

    return 0;
}
