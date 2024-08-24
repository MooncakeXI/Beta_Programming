#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[5]={0};
    for(int i = 0;i<5;i++){
        for(int j=0;j<4;j++){
            int  x;
            cin>>x;
            arr[i]+=x;
        }
    }
    int mx=INT_MIN,idx;
    for(int i = 0;i<5;i++){
        if(arr[i]>mx){
            mx=arr[i];
            idx=i;
        }
    }
    cout<<idx+1<<" "<<mx;
}