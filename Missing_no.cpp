#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long sum = 0, x;
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }
    long long totsum = n * (n + 1) / 2;
    cout << totsum - sum;
    return 0;
}