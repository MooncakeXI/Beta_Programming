#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,cnt=0,chk=0;
    cin>>n;
    priority_queue<int, vector<int>,greater<int>> pq;
    while(n--){
        int x;
        cin>>x;
        pq.push(x);
    }
    while(!pq.empty()){
        if(chk==0&&pq.top()==0){
            cnt++;
            pq.pop();
        }
        else if(chk!=0&&cnt!=0){
            cout<<0;
            cnt--;
        }
        else{
            cout<<pq.top();
            pq.pop();
            chk=1;
        }
    }
}