#include <iostream>
#include <vector>
using namespace std;

vector<int> findDivisors(int num) {
    vector<int> divisors;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            divisors.push_back(i);
            if (i != num / i) {
                divisors.push_back(num / i);
            }
        }
    }
    return divisors;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    vector<int> divisorsA = findDivisors(A);

    vector<int> divisorsC = findDivisors(C);

    for (int i : divisorsA) {
        int k = A / i;
        for (int j : divisorsC) {
            int l = C / j;
            if (i * l + j * k == B) {
                cout << i << ' ' << j << ' ' << k << ' ' << l << endl;
                return 0;
            }
        }
    }

    cout << "No Solution" << endl;
    return 0;
}
