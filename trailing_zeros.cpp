#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int power = 5;
int answer=0;
while(power <= n){
    answer += n / power;
    power *= 5;
}
cout<<answer;
}