#include <iostream>
using namespace std;

class Student {
    public:
    int rollNo;
    void display() {
        cout << "Roll number: " << rollNo << endl;
    }

};
int main(){
    Student *ptr = new Student;
    ptr->rollNo = 101;
    ptr->display();
    delete ptr;
    return 0;
}