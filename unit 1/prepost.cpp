#include<iostream>
using namespace std;
int main(){
    int a,b;
    a =3;
    b = a++ + ++a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    int c,d;
    c = 3;
    d = c++ +c + c++;
    d = ++c +  ++c;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
}