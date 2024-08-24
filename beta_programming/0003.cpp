#include <iostream>
int main(){
    int n,m;
    std::cin>>n>>m;
    int arr[n][m],arr2[n][m];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cin>>arr[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cin>>arr2[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cout<<arr[i][j]+arr2[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}