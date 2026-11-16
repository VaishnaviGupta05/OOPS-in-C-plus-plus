#include<iostream>
using namespace std;
class Employ{
    public:
    string name;
    int id;
};
int main(){
    Employ e1,e2;
    e1.name = "ram";
    e2.name = "rom";
    e1.id = 20;
    e2.id = 10;
    cout<<e1.name<<" "<<e1.id<<endl;
     cout<<e2.name<<" "<<e2.id<<endl;
    return 0;
}
