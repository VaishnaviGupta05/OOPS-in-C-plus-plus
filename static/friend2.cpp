#include <iostream>
using namespace std;

class H;
int add(H A, H B);

class H
{
private:
    int a;

public:
    H(int x)
    {
        a = x;
    }

    friend int add(H A, H B);

    int getA()
    {
        return a;
    }
};

int add(H A, H B)
{
    return A.a + B.a;
}

int main()
{
    H A(10);
    H B(20);

    int result = add(A, B);

    H S(result);

    cout << "A.a = " << A.getA() << endl;
    cout << "B.a = " << B.getA() << endl;
    cout << "S.a = " << S.getA() << endl;

    return 0;
}