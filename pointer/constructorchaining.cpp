#include <iostream>
using namespace std;

class Student {
    int age;
    string name;

public:
    Student() : Student(18, "Unknown") {
        cout << "Default constructor" << endl;
    }

    Student(int a, string n) {
        age = a;
        name = n;
        cout << "Parameterized constructor" << endl;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}