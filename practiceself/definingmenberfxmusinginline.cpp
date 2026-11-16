#include<iostream>
using namespace std;
class Demo{
    public:
    inline void show();
    };
    inline void Demo::show(){
        cout<<"hello"<<endl;
}
int main(){
    Demo d;
    d.show();
    return 0;
}
