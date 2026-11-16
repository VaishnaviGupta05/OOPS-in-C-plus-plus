#include<iostream>
using namespace std;
void swapnumbers(int &a , int &b){
  int temp = a ;
    a = b;
    b = temp;
}
int main(){
    int x = 10;
    int y = 20;
    swapnumbers(x,y);
    cout<<x<<y<<endl;
    return 0;
}