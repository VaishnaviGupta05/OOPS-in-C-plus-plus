#include<iostream>
using namespace std;
class Example{
 static int count;
 int a;
 public :
 void getdata(int);
 void display();
};
int Example :: count;
void Example :: getdata(int x){
    a = x;
    count ++;
}
void Example ::display(){
    cout << "a = " << a << endl;
    cout << "count = " << count << endl;
}
int main(){
    Example E1, E2;
    E1.getdata(11);
    E1.display();
    E2.getdata(20);
    E2.display();
}
