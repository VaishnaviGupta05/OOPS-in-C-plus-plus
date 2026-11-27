#include<iostream>
using namespace std;
class Parameter{ // in this arguments are passed
    int a,b;
    public:
    Parameter(int,int);
    void display();
};
Parameter::Parameter(int x, int y){
    a = x;
    b = y;
}
void Parameter::display(){
    cout<<a<<endl<<b;
}
int main(){
    Parameter P(10,20);
    P.display();
}

// calling constructor explicity 
// Parameter P = Parameter(10,20);
// calling the constructor Implicitly
// parameter P(10,20);