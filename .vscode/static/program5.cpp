
//  design a class bank account where each account has its own balance , but the bank maintains a static values for total deposits across all accounts. show how static functions help in reporting.
//take the initial deposite money as 5000
// make the function of deposite and variables A,B 
#include<iostream>
using namespace std;
class BankAccount{
    static int totalDeposits;
    int balance;
    public:
    BankAccount(int intialDeposit);
    void deposit(int amount);
    static void displayTotalDeposits();
    
}