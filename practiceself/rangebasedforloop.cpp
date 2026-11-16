#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> vec = {10,20,30,40};
 for(auto x : vec){
    cout<<x<<" ";
 }
}
// pass by value 
void change(int x){
   x = 100;
}
int main(){
   int a;
   a = 40;
   change(a);
 cout<<a;
}
// pass by refernce
void change(int &x){
   int x = 100;
}
int main (){
   int a = 90;
   change(a);
   cout<<a;
}
//pass by address/ pointer
void change(int &x){
   *x = 80;
}
int main(){
   int a = 40;
   change(&a);
   cout<<a;
}
// refernce variable
int main(){
   int x = 10;
   int &ref = 50;
   ref = 20;
   cout<<x;
}
// fxn overloading 
int add(int a, int b){
return a+b;}
int double(int a, int b){
return a+b;
}
int main (){
   cout<<add(10,20)<<endl;
   cout<<add(2.5,3.5)<<endl;
}
//default argument
void display(int x =10){
   cout<<x;
}
int main(){
   display();
   cout<<emdl;
   display(50);

}
// default arguments+ fxn overloading = ambiguity
void show(int x, int y =10){
  cout<<"function 1";
}
void show(int x = 10){
   cout<<"function 2";
}
int main(){
   show(8);
}
int main()[
   vector<int> vec = {10,20,30};
   for( auto x : vec){
      cout<<x;
   }

]