#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long mx = max(x, y);
        long long ans;
        if (mx % 2 == 0) {
            if (y == mx)
                ans = mx * mx - x + 1;
            else
                ans = (mx - 1) * (mx - 1) + y;
        }
        else {
            if (x == mx)
                ans = mx * mx - y + 1;
            else
                ans = (mx - 1) * (mx - 1) + x;
        }
        cout << ans << "\n";
    }
}