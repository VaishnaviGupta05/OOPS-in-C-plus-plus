#include<iostream>
using namespace std;
class Bank{
    public:
    string accountholdername;
    double balance;
    void deposite(double amount){
        balance += amount;
    }
    void showBalance(){
        cout<<"show balance"<<balance<<endl;
    }
};
int main(){
    Bank e1;
    e1.accountholdername = "pankaj";
    e1.balance = 5000;
    e1.deposite(2000);
    e1.showBalance();
    return 0;
}