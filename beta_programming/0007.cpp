#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double r;
    cin>>r;
    cout<<fixed<<setprecision(6)<<M_PI*r*r<<endl<<2*r*r;
}