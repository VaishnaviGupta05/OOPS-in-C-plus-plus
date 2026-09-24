#include<iostream>
using namespace std;
void readmarks(int &a , int &b , int &c){
cin>>a>>b>>c;
}
int calculatetotal(int a, int b, int c){
    return a + b + c;
}
void displayresult(int total){
    cout<<total;
}
int main(){
    int a, b,c;
    readmarks(a,b,c);
    int total = calculatetotal(a,b,c);
    displayresult(total);
    return 0;

}