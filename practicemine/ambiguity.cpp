#include<iostream>
using namespace std;
void show(int x,int y = 10){
    cout<<"fun 1";
}
void show(int x){
    cout<<"fxn 2";
}
int main(){
    show(8);
}

