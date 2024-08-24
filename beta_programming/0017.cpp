#include <iostream>
#include <algorithm>
using namespace std;

const int n = 4;
int main(){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<min(arr[0],arr[1])*min(arr[2],arr[3]);
}