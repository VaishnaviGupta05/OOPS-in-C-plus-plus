#include<iostream>
using namespace std;
class student{
    public:
    void display();
};
void student::display(){
    cout<<"student detail";
}
int main(){
    student s;
   s.display();
}