#include <iostream>
using namespace std;
main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sum=a+b+c;
    if(sum<=100&&sum>=80){
        cout<<'A';
    }
    else if(sum<=79&&sum>=75){
        cout<<"B+";
    }
    else if(sum<=74&&sum>=70){
        cout<<"B";
    }
    else if(sum<=69&&sum>=65){
        cout<<"C+";
    }
    else if(sum<=64&&sum>=60){
        cout<<"C";
    }
    else if(sum<=59&&sum>=55){
        cout<<"D+";
    }
    else if(sum<=54&&sum>=50){
        cout<<"D";
    }
    else if(sum<=49&&sum>=0){
        cout<<"F";
    }
}