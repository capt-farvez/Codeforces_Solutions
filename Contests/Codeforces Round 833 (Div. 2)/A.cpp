#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x;
    cin>>x;
    if(x==0){
        cout<<0<<endl;
    }
    else{
        if(x%2==0){
        cout<<x/2<<endl;
    }
    else{
        cout<<(x/2)+1<<endl;
    }
    }
  
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}