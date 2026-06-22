#include<bits/stdc++.h>
using namespace std;
int main(){
    int current = 1, best = 1;
    string s;
    cin>>s;
    for (int i=1;i<(int)s.size();i++){
        if(s[i]==s[i-1])
        current++;
        else current = 1;
        best=max(best,current);

    }
    cout<<best;
}