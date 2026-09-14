#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public: 
    void geta(int);
    friend class B;
};  
class B{
   public:
   void display(A A1){
       cout<<"Value of a: "<<A1.a<<endl;
   }
};
void A::geta(int x){
    a = x;
}
int main(){
 A obj1;
 obj1.geta(10);
 B obj2{};
 obj2.display(obj1);
}