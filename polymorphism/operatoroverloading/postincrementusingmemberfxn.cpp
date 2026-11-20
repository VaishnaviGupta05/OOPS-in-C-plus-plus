#include<iostream>
using namespace std;
class Example{
    int a;
public:
Example(int);
void display();
Example operator++(int);
};
Example::Example(int x){
    a = x;
}       
void Example::display(){
    cout << "Value of a: " << a << endl;
}
Example Example::operator++(int){
   Example E2(0);
   E2.a = a++;
   return E2;
}
int main(){
    Example A(10);
    cout<<"Before post increment: ";
    A.display();
    Example B (0);
    B = A++;
    cout<<"After post increment: ";
    A.display();
    B.display();
}