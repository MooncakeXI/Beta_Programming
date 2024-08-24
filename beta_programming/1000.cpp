#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int n,sz; 
    deque<string> q;
    string s;
    bool mis=false;
    cin>>sz>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        q.push_back(s);
    }
    string s1=q.front();
    q.pop_front();
    for(int i=1;i<n;i++){
        string tmp=q.front();
        q.pop_front();
        int cnt=0;
        for(int j=0;j<sz;j++){
            if(s1[j]!=tmp[j]){
                cnt++;
            }
        }
        if(cnt>=3){
            cout<<s1;
            mis=true;
            break;
        }
        else{
            s1=tmp;
        }
    }
    if(!mis){
        cout<<s;
    }
    return 0;
}