#include <iostream>
using namespace std;
int main(){
    int n,I=0,V=0,X=0,L=0,C=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int val=i;
        if(val-100>=0){
            C++;
            val-=100;
        }
        else if(i-90>=0){
            I++;
            X++;
            val-=90;
        }
        else if(i-50>=0){
            L++;
            val-=50;
        }
        else if(i-10>=0){
            X++;
            val-=10;
        }
        else if(i-9>=0){
            I++;
            X++;
            val-=9;
        }
        else if(i-5>=0){
            V++;
            val-=5;
        }
        else if(i-4>=0){
            I++;
            V++;
            val-=4;
        }
        if(val<=3){
            I+=val;
        }
    }
    cout<<I<<' '<<V<<' '<<X<<' '<<L<<' '<<C<<endl;
    return 0;
}