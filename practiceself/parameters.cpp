// there are three parameters
// pass by value : copy of parameter.
#include<iostream>
using namespace std;
 void change(int x){
 x = 100;
 }
int main(){
    int a = 10;
   change(a);
   cout<<a;
}
// pass by refernce : refernce of the parameter or refernce means alias of the variable/fxn is created 
void change(int &x){
    int x = 50;
}
int main(){
    int a = 80;
    change(a);
    cout<<a;
}
void chnage(int *x){
     *x = 50;
}
int main(){
int a = 40;
change(&a);
cout<<a;
}

//*----------------------------------------------------------------------------------*/
// fxn declaation and fxn defination
int sum(int a, int b);  // declaration
int sum(int a, int b){
return a+b;
}
