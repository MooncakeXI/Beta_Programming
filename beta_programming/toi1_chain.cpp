#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n,l;
    cin>>n>>l;
    string tmp,s,ans;
    cin>>tmp;
    bool found =false;
    for(int i=0;i<l-1;i++){
        cin>>s;
        int cnt=0;
        for(int j=0;j<n;j++){
            if(tmp[j]!=s[j]){
                cnt++;
            }
        }
        if(cnt>=3){
            ans=tmp;
            break;
        }
        tmp=s;
    }
    if(!found) ans=tmp;
    cout<<ans;
    return 0;
}