#include <iostream>
using namespace std;

int main(){
    unsigned long long n;
    if(!(cin>>n)) return 0;
    unsigned long long a=0,b=1;
    for(unsigned long long i=0;i<n;++i){ unsigned long long t=a+b; a=b; b=t; }
    cout<<a<<"\n";
    return 0;
}
