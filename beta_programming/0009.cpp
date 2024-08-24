#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[3];
    for(int i = 0;i<3;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    string s;
    cin>>s;
    for(char i : s){
        if(i=='A') cout<<arr[0]<<" ";
        else if(i == 'B') cout<<arr[1]<<" ";
        else cout<<arr[2]<<" ";
    }

}