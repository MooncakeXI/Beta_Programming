#include <iostream>
#include <string>
using namespace std;
int main(){
    struct team{
        string name;
        int goal[4],score;
    }a1,a2,a3,a4;
    cin>>a1.name>>a2.name>>a3.name>>a4.name;
    for(int i=0;i<4;i++){
        cin>>a1.goal[i]>>a2.goal[i]>>a3.goal[i]>>a4.goal[i];
    }
    
    return 0;
}