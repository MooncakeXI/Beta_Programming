#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#define f first
#define s second
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> value;
    vector<pair<int,int>> freq;
    for(int i=0;i<n;i++){
        int tmp; cin>>tmp; 
        value.push_back(tmp);
    }
    
    for (int i = 0; i < n; i++) {
        int val = value[i];
        auto it = find_if(freq.begin(), freq.end(), [&](pair<int, int> &p) {
            return p.f == val;
        });

        if (it != freq.end()) {
            it->s++;
        } else {
            freq.push_back(make_pair(val, 1));
        }
    }

    int max_count = INT_MIN;

    for (auto &p : freq) {
        if (p.s > max_count) {
            max_count = p.s;
        }
    }
    sort(freq.begin(),freq.end(),[](const pair<int,int> &a,const pair<int,int> &b){
        return a.f<b.f;
    });
    for (auto &p : freq) {
        if (p.s == max_count) {
            cout << p.f << " ";
        }
    }
    return 0;
}