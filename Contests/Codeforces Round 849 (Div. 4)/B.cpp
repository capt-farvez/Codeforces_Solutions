#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0, y=0, flag=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='R'){
            x++;
        }
        else if(s[i]=='U'){
            y++;
        }
        else if(s[i]=='D'){
            y--;
        }
        else if(s[i]=='L'){
            x--;
        }

        if(x==1 & y==1){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}