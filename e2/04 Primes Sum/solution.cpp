#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for(int i = 3; i * i <= n; i+=2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    long long ans = 0;

    for(int i=2; i<=n; i++) {
        if (isPrime(i)) ans += i;
    }

    cout << ans << endl;
}