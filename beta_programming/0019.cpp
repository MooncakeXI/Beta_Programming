#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum_S=1,sum_B=0;
    while(n--){
        int s,b;
        cin>>s>>b;
        sum_S*=s;
        sum_B+=b;
    }
    cout<<abs(sum_S-sum_B);

}