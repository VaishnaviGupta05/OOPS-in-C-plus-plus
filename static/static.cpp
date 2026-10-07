#include <iostream>
using namespace std;
class Example {
    int a;
    static int n;
public:
    static void display();
    void geta(int);
    void show();
};
void Example::geta(int x) {
    a = x;
}
void Example::show() {
    cout << a << endl;
    cout << n << endl;
}
int Example::n = 10;
void Example::display() {
    cout << n << endl;
}
int main() {
    Example E;
    E.geta(100);
    E.show();
    Example::display();
    return 0;
}
