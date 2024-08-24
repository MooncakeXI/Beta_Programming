#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        cout<<s[i];
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            if(s[i+1]=='p'&&s[i+2]==s[i]){
                i+=2;
            }
        }
    }
}