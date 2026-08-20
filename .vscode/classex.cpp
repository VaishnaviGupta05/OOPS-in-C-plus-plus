#include<iostream>
using namespace std;
class Example {
    int a;
    public:
    void getA(int);
    int sum(Example , Example);
};
void Example::getA(int a1){
    a = a1;
}
int Example::sum(Example A, Example B){
    int S = A.a + B.a;
    return(S);
}
int main(){
    Example e1,e2,e3;
    e1.getA(10);
    e2.getA(20);
    int r = e3.sum(e1, e2);
    cout<<r;
}