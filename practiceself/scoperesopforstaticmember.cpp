#include<iostream>
using namespace std;
class student{
    public:
    static int count;
};
int student::count = 0;
int main(){
    student::count = 100;
    cout<<student::count;
}

