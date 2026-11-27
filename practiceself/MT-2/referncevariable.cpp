//data-type & reference-name = variable-name
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m = 10;
    int & n = m;
    n = n*3;
    cout<<m<<endl;
    cout<<n<<endl;
    return 0;
}
