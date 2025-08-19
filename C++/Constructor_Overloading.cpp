#include <iostream>
using namespace std;

class User {
public:
    string name;   // instance variable

    // First constructor: no parameter
    User() {
        name = "Default";
    }

    // Second constructor: with parameter
    User(string n) {
        name = n;
    }

    // Function to print name
    void display() {
        cout << name << endl;
    }
};

int main() {
    // Using first constructor (no parameter)
    User u1;
    u1.display();   // Output: Default

    // Using second constructor (with parameter)
    User u2("Geeks");
    u2.display();   // Output: Geeks

    return 0;
}
