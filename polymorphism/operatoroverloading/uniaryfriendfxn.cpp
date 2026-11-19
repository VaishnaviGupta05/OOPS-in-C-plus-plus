#include<iostream>
using namespace std;
class Example{
    // do it with the help of parameterized constructor only
    int a,b;
    public:
    Example(int x,int y);
    void display();
    friend Example operator-(Example);  
};
Example::Example(int x, int y){
    a = x;
    b = y;
}
void Example::display(){
    cout << "a = " << a << ", b = " << b << endl;
}
Example operator-(Example obj){
    return Example(-obj.a, -obj.b);
}
int main(){
    Example obj(10, 20);
    Example result = -obj;
    cout << "Original: ";
    obj.display();
    cout << "After unary minus: ";
    result.display();
    return 0;
}