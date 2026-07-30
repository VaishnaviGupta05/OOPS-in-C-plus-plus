#include<iostream>
using namespace std;
void sum();
int sum(int,int);
int sum(int,int,float);
int main(){
  int a,b,r1;
  float r2,c;
  cout<<"enter the numbers:";
  cin>>a>>b;
  r1= sum(a,b);
  r2= sum(a,b,c);
  cout<<"the sum is :"<<r1;
  cout<<"the sum is:"<<r2;
}
void sum (){
    int x,y,s;
    cout<<"enter the numbers:";
    cin>>x>>y;
    s=x+y;
    cout<<"the sum is:"<<s;
}

