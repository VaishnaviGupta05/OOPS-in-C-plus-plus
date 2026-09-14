#include<iostream>
using namespace std;
class Example{
    int a,b;
    public:
    void getab(int,int);
    void display();
    friend void average(Example);
};
void Example::getab(int x,int y){
    a = x;
    b = y;
}
void Example ::display(){
    cout<<a<<b;
}
void average(Example E){
    int avg = (E.a + E.b)/2;
    cout<<avg;
}
int main(){
    Example E;
    E.getab(10,20);
    E.display();
    average(E);
    return 0;
}
