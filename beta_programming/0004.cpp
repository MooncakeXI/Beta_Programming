#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    bool C=false,S=false;
    for(char i : s){
        if(i>='A'&&i<='Z') C = true;
        else if(i>='a'&&i<='z') S = true;
    }
    if(C==true&&S==true) cout<<"Mix";
    else if(C==true) cout<<"All Capital Letter";
    else cout<<"All Small Letter";
}