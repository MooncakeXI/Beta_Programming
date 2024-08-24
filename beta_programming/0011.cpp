#include <iostream>
using namespace std;
int main(){
    bool arr[42]={false}; 
    int cnt = 0;
    int n=10;
    while(n--){
        int a;
        cin>>a;
        arr[a%42] = true;
    }
    for(bool i : arr){
        if(i == true ) cnt++; 
    }
    cout<<cnt;
}