#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
    string a,b;
    char o;
    cin>>a>>o>>b;
    if(o=='+'){
        int s=max(a.size(),b.size()), l=min(a.size(),b.size());
        if(a.size()==b.size()){
            cout<<2;
            for(int i =1;i<a.size();i++){
                cout<<0;
            }
        }
        else{
            cout<<1;
            for(int i=s;i>1;i--){
                if(i==l+1) cout<<1;
                else cout<<0;
            }
        }
    }
    else{
        int s =a.size()+b.size();
        cout<<1;
        for(int i=1;i<s-1;i++){
            cout<<0;
        }
    }
    return 0;
}