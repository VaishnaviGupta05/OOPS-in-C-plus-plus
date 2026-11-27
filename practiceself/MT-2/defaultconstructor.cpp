#include<iostream>
using namespace std;
class Item{
    int a,b;
    public:
    Item();
    void display(){
        cout<<a<<" and "<<b;
    }
};
Item::Item(){
    cout<<"enter the two numbers:";
    cin>>a>>b;
}
int main(){
    Item I;
    I.display();
}