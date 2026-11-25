#include <iostream>
using namespace std;

class Outer
{
    private:

    class Inner
    {
        public:
        void show()
        {
            cout<<"Inside Inner Class";
        }
    };

    public:
    void show()
    {
        Inner inner;
        inner.show();
    }
};

int main()
{
    Outer o;
    o.show();
    return 0;
}