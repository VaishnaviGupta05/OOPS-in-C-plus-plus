#include <iostream>
using namespace std;
class Student {
private:
    int rollNumber;
public:
    // Parameterized constructor
    Student(int rollNumber) {
        this->rollNumber = rollNumber;
        cout << "Parameterized constructor called" << endl;
    }
    // Default constructor calls the parameterized constructor
    Student() : Student(10) {
        cout << "Default constructor called" << endl;
    }
    void display() {
        cout << "Roll number: " << rollNumber << endl;
    }
};
int main() {
    Student student;
    student.display();
    return 0;
}