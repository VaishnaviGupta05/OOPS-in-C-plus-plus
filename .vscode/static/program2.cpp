#include<iostream>
using namespace std;
class Example{
    static int n;
    int a;
    public:
    Example(int x);
    void geta(int x);
    static void display();
};  
void Example::geta(int x){   //:: scope resolution operator
    a = x;
}
int Example::n = 10;
void Example::display(){
    cout<<n;
}
int main(){
    Example::display();
}