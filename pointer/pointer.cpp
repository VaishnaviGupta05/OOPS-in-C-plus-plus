#include <iostream>
using namespace std;
class Example{
private:
    int value;

public:
    Example(int v){
        value = v;
    }
    void display(){
        cout << value << endl;
    }
};
int main(){
    Example E(10);
    E.display();
    Example *ptr = &E;
    cout<<ptr<<endl;
    ptr->display();
}