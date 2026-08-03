#include <iostream>
using namespace std;
int main(){
     long long n,f=1;
    if(!(cin>>n)) return 0;
     for(long long i=2;i<=n;++i){
     f*=i; 
     cout<<f<<"\n";
    }
}
