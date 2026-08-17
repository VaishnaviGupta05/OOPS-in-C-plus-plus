#include<iostream>
using namespace std;
// have to do function overloading with 2 methods
class Student {
    // 3 data members
    int rollNo;
    string name;
    float marks;

public:
    // Method 1: input data
    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Method 2: display data
    void displayData() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
    }
};

int main() {
    Student s;

    s.getData();
    s.displayData();

    return 0;
}