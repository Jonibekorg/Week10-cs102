#include <iostream>
using namespace std;

int sumBase(int n, int k) {
    if (n == 0)
        return 0;
    return n%k + sumBase(n/k, k);
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << sumBase(n, k) << endl;
}
