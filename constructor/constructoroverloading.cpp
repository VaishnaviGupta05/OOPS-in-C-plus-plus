// constructor overloading
#include <iostream>
using namespace std;
class Number {
private:
    int a;
    int b;
public:
    Number();              // default constructor
    Number(int x);         // parameterized constructor
    Number(int x, int y);  // parameterized constructor
    void display();
};
Number::Number() {
    a = 0;
    b = 0;
    cout << "Default constructor called" << endl;
}
Number::Number(int x) {
    a = x;
    b = 0;
    cout << "Single-argument constructor called" << endl;
}
Number::Number(int x, int y) {
    a = x;
    b = y;
    cout << "Two-argument constructor called" << endl;
}
void Number::display() {
    cout << "a = " << a << ", b = " << b << endl;
}
int main() {
    int x, y;
    cout << "Enter value for one-argument constructor: ";
    cin >> x;
    cout << "Enter values for two-argument constructor: ";
    cin >> y;
    Number obj1;         // default constructor
    Number obj2(x);      // parameterized constructor
    Number obj3(x, y);   // parameterized constructor
    cout << "obj1: ";
    obj1.display();
    cout << "obj2: ";
    obj2.display();
    cout << "obj3: ";
    obj3.display();
    return 0;
}