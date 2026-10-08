#include <iostream>
using namespace std;

class Example {
    int a;

public:
    void geta(int x) {
        a = x;
    }
    void display() const {
        cout << a << endl;
    }
    friend Example sum(Example, Example);// we need to define friend fxn as normal fxn because it is not a member of the class
};

Example sum(Example E1, Example E2) {
    Example result;
    result.a = E1.a + E2.a;
    return result;
}

int main() {
    Example first, second;
    first.geta(10);
    second.geta(20);

    Example result = sum(first, second);
    cout << "Sum: "; // friend fxn ko call karne ke liye kisi object ki jarurat nahi hai
    result.display();
    return 0;
}