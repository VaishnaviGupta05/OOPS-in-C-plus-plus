#include<iostream>
using namespace std;
class Example{
    static int n;
    int a;
    public:
    Example(int x);
    static void display();
};  
void Example::geta(int x){
    a = x;
}
int Example::n = 10;
void Example::display(){
    cout<<n;
}
int main(){
    Example::display();
}