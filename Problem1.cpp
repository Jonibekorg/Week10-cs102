#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int largestDigit(int n) {
    if (n < 10) {
        return n;
    }
    int last = n%10;
    int largest = largestDigit(n / 10);
    return (last > largest) ? last : largest;
}

int main() {
    int n;
    cin>>n;
    cout<<largestDigit(n)<<endl;
    return 0;
}
