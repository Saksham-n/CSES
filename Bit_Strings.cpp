#include <bits/stdc++.h>
using namespace std;
int main(){
    const long long MOD = 1000000007;
    int n;
    cin>>n;
    long long ans = 1;

while (n--) {
    ans = (ans * 2) % MOD;
}

cout << ans;
}