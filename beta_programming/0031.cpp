#include <iostream>
#include <cmath>
#define f first
#define s second
using namespace std;
int cnt=0;

void solve(int n){
    while(n!=1){
        n=floor(n/2);
        cnt++;
    }
}
int main(){
    pair<pair<int,int>,int> p;
    cin>>p.f.f>>p.f.s>>p.s;
    solve(p.f.f);
    solve(p.f.s);
    solve(p.s);
    cout<<cnt;
    return 0;
}