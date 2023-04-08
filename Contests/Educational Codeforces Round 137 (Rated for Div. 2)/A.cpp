#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ll count;
    count=3*(10-n)*(9-n);
    cout<<count<<endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}