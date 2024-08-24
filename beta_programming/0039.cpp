#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n),ban(m);

    for(int i=0;i<n;i++) arr[i]=i+1;
    for(int i=0;i<m;i++) cin>>ban[i];

    do{
        if(find(ban.begin(),ban.end(),arr[0])!=ban.end()) continue;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }while(next_permutation(arr.begin(),arr.end()));
    return 0;
}