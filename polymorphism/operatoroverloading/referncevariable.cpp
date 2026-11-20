#include<iostream>
using namespace std;
class Example{
    int a;
public:
    Example(int value) : a(value) {}
    Example& operator++() {
        ++a;
        return *this;
    }
    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

int main(){
    Example object(10);
    Example &reference = object;
    ++reference;
    reference.display();
    return 0;
}