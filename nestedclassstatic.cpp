#include<iostream>
using namespace std;

class Outer
{
public:
    static int value;

    class Inner
    {
    public:
        void show()
        {
            cout << "Value=" << Outer::value;
        }
    };
};

int Outer::value = 10;

int main()
{
    Outer::Inner inner;
    inner.show();
    return 0;
}