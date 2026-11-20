// pre-increment member function
#include <iostream>
using namespace std;
class Example{
    int a;
public:
Example(int);
void display();
Example operator++(); // pre-increment operator overloadin
};
Example::Example(int x){
    a = x;
}
void Example::display(){
    cout << "Value of a: " << a << endl;
}
Example Example::operator++(){
    ++a;
    return *this;
}
int main(){
    Example value(10);
    cout << "Original: ";
    value.display();

    Example result = ++value;
    cout << "After pre-increment: ";
    value.display();
    cout << "Returned value: ";
    result.display();

    return 0;
}
