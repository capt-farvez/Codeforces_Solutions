#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x,y,i;
    cin>>x>>y;
    ll cheeseSize[y][2];
    for(i=0; i<y; i++){
        cin>>cheeseSize[i][0]>>cheeseSize[i][1];
    }
    if(x<=y){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
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