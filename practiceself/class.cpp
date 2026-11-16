#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
void display(){
    cout<<name<<"name"<<endl;
    cout<<age<<"age"<<endl;
}
};
int main(){
    Student s1;
    s1.name = "rahul";
    s1.age = 20;
    s1.display();
}