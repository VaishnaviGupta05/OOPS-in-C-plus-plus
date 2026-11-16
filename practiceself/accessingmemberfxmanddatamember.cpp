#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int marks;
 void display(){
    cout<<name<<"score"<<marks;
 }
};
int main(){
    Student s1;
    s1.name = "pranjal";  // dot operator = obj.member fxn
    s1.marks = 95;
    s1.display();

    Student *ptr = &s1;
   ptr->marks = 99;
   ptr->display();// arrow operator = pointre -> 
   return 0;
}
