#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void geta(int);
    friend void swap(A,B);
};
class B{
    int b;
    public:
    void getb(int);
    friend void swap(A,B);
};
void A::geta(int x){
    a = x;
}

void B::getb(int x){
    b = x;
}

void swap(A objA, B objB){
    int t = objA.a;
    objA.a = objB.b;
    objB.b = t;
    cout<<objA.a<<objB.b;
}
int main(){
    A obj1;
    B obj2;
    obj1.geta(10);
    obj2.getb(20);
    swap(obj1, obj2);
}