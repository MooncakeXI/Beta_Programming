#include <iostream>
using namespace std;
int main(){
    int arr[9],sum=0;
    for(int i = 0;i<9;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(sum-100==arr[i]+arr[j]){
                for(int k=0;k<9;k++){
                    if(k==i||k==j) continue;
                    cout<<arr[k]<<endl;
                }
            }
        }
    }
}