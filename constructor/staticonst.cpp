#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    static int Count;
    public:
    Student(int,string);
    void display();
    static void show(); 
};
Student::Student(int r,string n){
    roll = r;
    name = n;
    count ++;
}
void Student::display(){
    cout<<roll<<name;
}
int Student::count;
void student::show(){
    cout<<count;
}
int main(){
    Student S1(2,"ABC");
    S1.display();
    Student S2= Student(5,"amit");
    S2.display();
    Student::show();
}