#include <iostream>
using namespace std;
int main(){
    string day[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d,m;
    cin>>d>>m;
    for(int i = 1;i<12;i++){
        if(m>i) d+=month[i-1];
    }
    d%7==0 ? cout<<day[6] : cout<<day[d%7-1];
    return 0;
}