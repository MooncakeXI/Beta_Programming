#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
main(){
    int n;
    cin>>n;
    int mn=INT_MAX,mx=INT_MIN;
    while(n--){
        int x;
        cin>>x;
        mx = max(mx,x);
        mn = min(mn,x);
    }
    cout<<mn<<'\n'<<mx;
}