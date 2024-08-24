#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    scanf("%d", &n); 

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }


    for (int i = 0; i < n; ++i) {
        printf("%.0Lf\n", pow(2.L, a[i])); 
    }

    return 0;
}
