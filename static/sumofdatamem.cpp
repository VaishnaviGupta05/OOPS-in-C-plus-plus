#include<iostream>
using namespace std;
class Test;
class Example{
    public:
    int a;
    void geta(int);
    void Adisplay();
    friend int sum(Example,Test);
};
class Test{
    int b;
    public:
    void getb(int);
    void Tdisplay();
    friend int sum(Example,Test);
};
void Example::geta(int x){
    a = x;
}
void Example::Adisplay(){
    cout<<"\nValue of a: "<<a<<endl;
}
int sum(Example E,Test T){
    int s = E.a + T.b;
    return s;
}