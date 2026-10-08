#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void geta(int);
    void showa();
    friend class B;
    void displayB(B);
};
class B{
    int b;
    public:
    void getb(int);
    void showb();
    friend class A;
    void displayA(A); // jisme object ayega wahi friend hoga so ye hi friend h bas 
};
void A::geta(int x){
    a = x;
}
void A:: showa(){
    cout<< a << endl;

}
void B::getb(int y){
    b = y;
}
void B:: showb(){
    cout<< b<<endl;
}
void A::displayB(B B1){
    cout<<B1.b<<endl;
}
void B:: displayA(A A1){
    cout<<A1.a<<endl;
}
int main(){
    A X; // A ko intialize karne ke liye object h 
    X.geta(10);
    X.showa();
    B Y;
    Y.getb(20);
    Y.showb();
    X.displayB(Y);// isme obj le raha h parameter B ka 
    Y.displayA(X);
}

//member fxn bhi h and friend bhi h to isi liye hame object bana hi hoga 