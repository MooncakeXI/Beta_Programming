#include <iostream>
using namespace std;
int modulo(string& s,int n){
    int ans=0;
    for(auto &e:s) 
        ans = (ans*10+(e-'0'))%n;
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<modulo(s,3)<<' '<<modulo(s,11);
    return 0;
}