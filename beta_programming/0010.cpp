#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=1,b=0,c=0;
    for(char i : s){
        if(i=='A') swap(a,b);
        if(i=='B') swap(b,c);
        if(i=='C') swap(a,c);
    }
    if(a==1) cout<<'1';
    else if(b==1) cout<<'2';
    else cout<<'3';
}