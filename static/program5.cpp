#include<iostream>
using namespace std;
class Item{
    static int count;
    public:
    static void show(){
        cout<<count;
    }
};
int Item::count = 10;
int main(){
    Item::show();
}