#include<iostream>
using namespace std;
class Example{
    int a;
    public:
    Example(int);
    void display(){
        cout<<a<<endl;
    }
};
Example::Example(int x){
    a = x;
}
int main(){
    Example E1(10);
    E1.display();
    Example E2 = E1;
    E2.display();
}