#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }
    int oddCount = 0;
    char middleChar = '#';
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2) {
            oddCount++;
            middleChar = 'A' + i;
        }
    }
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    string left = "", middle = "";
    for (int i = 0; i < 26; i++) {
        left += string(freq[i] / 2, 'A' + i);
        if (freq[i] % 2) {
            middle = string(freq[i], 'A' + i);
        }
    }
    string right = left;
    reverse(right.begin(), right.end());
    cout << left + middle + right << '\n';
    return 0;
}