#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


int countDiv(int g, int d) {
    if (d == 0) {
        return 0;
    }
    return (g % d == 0 ? 1 : 0) + countDiv(g, d - 1);
}

int commonFactors(int a, int b) {
    int g = gcd(a, b);
    return countDiv(g, g);
}

int main() {
    int a, b;
    if (cin >> a >> b) {
        cout << commonFactors(a, b) << '\n';
    }
    return 0;
}
