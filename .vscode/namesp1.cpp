#include<iostream>
using namespace std;
namespace start{
    void display (){
        cout<<"A";
    }
}
namespace B{
    double x = 6.5;
    void display(){
        cout<<"B";
    }
    void display();
    void run(){
        string x = "CSE36";
        display();
        cout<<x;
    }
}

int main(){
    start::display();
    B::run();
}
