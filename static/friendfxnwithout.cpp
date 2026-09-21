#include<iostream>
using namespace std;
class Example{
    int a;
    public:
    void geta(int);
    Example sum(Example,Example);
    display(Example);
};
void Example::geta(int x){
    a = x;
}
Example Example::sum(Example E1,Example E2){
    Example S;
    S.a = E1.a+E2.a
    
}