#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0, y=n-1, flag=0;
    for(ll i=0; i<n/2; i++){
        //cout<<i<<"i"<<endl;
        if((s[i]=='0' && s[y-i]=='1') || (s[i]=='1' && s[y-i]=='0')){
            x++;
        //     cout<<i<<s[i]<<y-i<<s[y-i]<<endl;
        //     cout<<x<<endl;
         }
         else{
            break;
         }
        
       // y--;
    }
    //cout<<x<<endl;
    cout<<n-(2*x)<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}