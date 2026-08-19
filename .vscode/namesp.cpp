#include<iostream>
using namespace std;
namespace start{
void display(){
    cout << "I am in display function" << endl;
}
}
int main (){
start::display();
}
