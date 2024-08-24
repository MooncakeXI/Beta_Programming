#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    bool kill[n+1]={false};
    queue<int> q;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            if(kill[j]==true) continue;
            if(j%i==0){
                q.push(j);
                kill[j]=true; 
            }
        }
    }
    for(int i=0;i<k-1;i++){
        q.pop();
    }
    cout<<q.front();
}