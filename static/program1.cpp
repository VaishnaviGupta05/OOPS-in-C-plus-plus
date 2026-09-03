#include<iostream>
using namespace std;
class Example{
    static int n;
    int a;
    public:
    Example(int x = 0);
     void display();
};
int Example::n = 10;
Example::Example(int x){
    a = x;
}
void Example::display(){
    cout<<n;
}
int main(){
    Example E1;
    E1.display();
}