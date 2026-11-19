#include <iostream>
using namespace std;
int countOrders(int n) {
    return n == 1 ? 1 : (long long)countOrders(n - 1) * n * (2 * n - 1) % (10000000007);
}
int main() {
    int n;
    cin >> n;
    cout << countOrders(n);
}