#include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        long long cost=0;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        for (int i=1;i<n;i++){
        if (arr[i-1]>arr[i]) {
        cost+=arr[i-1]-arr[i];
        arr[i]=arr[i-1];
    }
}
    cout<<cost;
}