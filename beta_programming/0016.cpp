#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int score[3]={0};

char a[] = {'A','B','C'};
char b[] = {'B','A','B','C'};
char c[] = {'C','C','A','A','B','B'};

int main(){
    int n;
    string s;
    cin>>n>>s;

    int mx=0;
    for(int i=0;i<s.length();i++){
        if(a[i%3]==s[i]) score[0]++;
        if(b[i%4]==s[i]) score[1]++;
        if(c[i%6]==s[i]) score[2]++;
        mx = max(mx,max(score[0],max(score[1],score[2])));
    }

    cout<<mx<<endl;

    for(int i=0;i<3;i++){
        if(score[i]==mx){
            if(i==0) cout<<"Adrian"<<endl;
            if(i==1) cout<<"Bruno"<<endl;
            if(i==2) cout<<"Goran"<<endl;
        }
    }
    return 0;
}