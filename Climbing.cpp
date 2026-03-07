#include <iostream>
using namespace std;

long long ClimbUnlimited(int n) {
    if(n == 0) return 1;
    long long total = 0;
    for(int i = 1; i <= n; i++) {
        total += ClimbUnlimited(n-i);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    cout << ClimbUnlimited(n) << endl;
    return 0;
}
