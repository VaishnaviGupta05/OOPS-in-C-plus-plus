#include<iostream>
using namespace std;
class Student{
    int r;
   string name;
   public: 
   void getdata (int, string);
   void display();
};
void Student:: getdata(int x, string y){
    r = x;
    name = y;
}
void Student:: display(){
    cout<<r;
    cout<<name;
}
int main(){
    int r2;
    string n2;
    cin>>r2>>n2;
    Student S[2];
    for(int i=0;i<2;i++){
        S[i].getdata(r2,n2);
        S[i].display();
    }
    return 0;
}
