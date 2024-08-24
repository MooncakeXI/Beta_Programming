#include <iostream>
using namespace std;
int main(){
    int n,I=0,V=0,X=0,L=0,C=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int val=i;
        while(val!=0){
            if(val-100>=0){
                C++;
                val-=100;
            }
            else if(val-90>=0){
                C++;
                X++;
                val-=90;
            }
            else if(val-50>=0){
                L++;
                val-=50;
            }
            else if(val-40>=0){
                X++;
                L++;
                val-=40;
            }
            else if(val-10>=0){
                X++;
                val-=10;
            }
            else if(val-9>=0){
                I++;
                X++;
                val-=9;
            }
            else if(val-5>=0){
                V++;
                val-=5;
            }
            else if(val-4>=0){
                I++;
                V++;
                val-=4;
            }
            else if(val-1>=0){
                I++;
                val-=1;
            }
        }
    }
    cout<<I<<' '<<V<<' '<<X<<' '<<L<<' '<<C<<endl;
    return 0;
}