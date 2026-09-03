#include<iostream>
using namespace std;
class Example{
public:
   int a;
   static int n;
   static void display(){
      cout << "n = " << n << endl;
   }
};
int Example::n = 10;
int main(){
    Example E1;
    E1.a = 5;
    Example::display();
}