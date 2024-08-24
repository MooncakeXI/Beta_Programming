#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }
        for(const auto &p : m){
        cout << p.first << endl;
    }
    return 0;
}