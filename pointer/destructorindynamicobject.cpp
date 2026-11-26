
#include <iostream>
using namespace std;
class Student {
public:
    Student() {
        cout << "Constructor called" << endl;
    }

    ~Student() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    Student *p = new Student;

    cout << "Object is in use" << endl;
    delete p;
    return 0;
}
