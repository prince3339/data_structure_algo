#include <iostream>
#define ll long long
using namespace std;

int main() {
    int n = 6;
    ll fiblist[n] = {0};

    fiblist[0] = 0;
    fiblist[1] = 1;

    for(int i = 2; i<= n; ++i) {
        fiblist[i] = fiblist[i - 1] + fiblist[i - 2];
        //cout << fiblist[i] << endl;
    }

    for(int i = 0; i<= n; ++i) {
        cout << fiblist[i] << endl;
    }
    return 0;
}
