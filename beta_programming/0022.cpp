#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int new_n = n%2==0 ? n-1:n;
    for(int i=-(new_n/2) ; i<=(new_n/2); i++){
        for(int j=-(new_n/2) ; j<=(new_n/2) ; j++){
            if(abs(i)+abs(j)==new_n/2)cout << "*";
            else cout << "-";
        }

        if(i==0 and n%2==0){
            cout << "\n*";
            for(int j=0 ; j<new_n-2 ; j++)cout << "-";
            if(n!=2)cout <<"*";
        }
        cout << '\n';
    }
    return 0;
}