#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,x,y;
cin>>n;
while(n--){
    cin>>x>>y;
if ((x+y)%3==0 && max(x,y)<=2*min(x,y))
    cout<<"YES\n";
else
    cout<<"NO\n";

}
}