#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    long long ap = 0;
    if(b == 0) {
        return a;
    }else {
        ap = a%b;

        return gcd(b, ap);
    }
}
int main() {
    long long a = 18, b = 35;

    long long r = gcd(a, b);

    cout << r << endl;
}
