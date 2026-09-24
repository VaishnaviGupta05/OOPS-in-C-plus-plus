// Make a class member function a friend of another class and calculate a sum.
#include <iostream>
using namespace std;

class Test;

class Example {
    int a;

public:
    Example(int);
    void displayA();
    void Sum(Example, Test);
};

class Test {
    int b;

public:
    Test(int);
    void displayB();
    friend void Example::Sum(Example, Test);
};

Example::Example(int x) {
    a = x;
}

void Example::displayA() {
    cout << a << endl;
}

Test::Test(int y) {
    b = y;
}

void Test::displayB() {
    cout << b << endl;
}

void Example::Sum(Example E1, Test T1) {
    int s = E1.a + T1.b;
    cout << s << endl;
}

int main() {
    Example E1(10);
    E1.displayA();

    Test T1(20);
    T1.displayB();
    E1.Sum(E1, T1);
}
