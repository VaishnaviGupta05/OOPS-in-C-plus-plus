// can be used as friend and member fxn
// in mem fxn no arguments for unary op and use 1 for a binary op 
// in friend fxn use 1 for unary op and 2 for binary op
// in mem fxn use this pointer to access the calling object
// in friend fxn use the object name to access the calling object
// in mem fxn use the object name to access the argument object
#include <iostream>
using namespace std;
class Example {
    int a, b;
public:
    void getdata(int x, int y);
    void display();
    Example operator+( Example E);
};
void Example::getdata(int x, int y) {
    a = x;
    b = y;
}
void Example::display() {
    cout << "a = " << a << ", b = " << b << endl;
}
Example Example::operator+(Example E) {
    Example S;
   S.a = a+E.a;
   S.b = b+E.b;
    return S;
}
int main() {
    Example E1, E2, E3;
    E1.getdata(10, 20);
    E1.display();
    E2.getdata(100, 200);
    E2.display();
    E3 = E1+E2;
    E3.display();
}