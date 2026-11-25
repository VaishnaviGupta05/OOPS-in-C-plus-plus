#include<iostream>
using namespace std;
class Outer{
    private:
    class Inner{
            public:
            void show(){
                cout<<"private nested class";
            }
        };
    public:
    void show(){
        Inner inner;
        inner.show();
    }
};

int main(){
    Outer outer;
    outer.show();
    return 0;
}