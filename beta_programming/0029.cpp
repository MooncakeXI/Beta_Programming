#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    if(a>b) cout<<2;
    else cout<<ceil(b/a);
    return 0;
}