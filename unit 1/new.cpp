#include<iostream>
using namespace std;
class Example{
    private: 
    int a, b;
    
    public :
    void getdata(int, int);
    int printdata();
};
void Example ::getdata(int x, int y)
{
    x = 45;
    y = 45;
//cout <<"\nEnter the two number: ";
//cin >> a >> b;
}
int Example::display()
{
    int r = x + y;
    return (r);
}
//void Example::print()
{
    cout<< " the numbers are: "<<a<<b;
}
int main(){
    Example E;
    E.getdata();
    E.print();
    return 0;
}









