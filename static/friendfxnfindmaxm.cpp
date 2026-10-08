#include <iostream>
using namespace std;
class B;  // forward declaration
class A {
private:
    int a;
public:
    A(int x) : a(x) {}
    friend int findMax(A objA, B objB);
};
class B {
private:
    int b;
public:
    B(int x) : b(x) {}
    friend int findMax(A objA, B objB);
};
int findMax(A objA, B objB) {
    int maxValue = objA.a;

    if (objB.b > maxValue)
        maxValue = objB.b;

    return maxValue;
}
int main() {
    A obj1(20);
    B obj2(35);
    cout << "Maximum value is: " << findMax(obj1, obj2) << endl;
    return 0;
}
