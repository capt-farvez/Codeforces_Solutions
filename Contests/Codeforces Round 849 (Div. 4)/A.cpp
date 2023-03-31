#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s[0]=='c' || s[0]=='o' || s[0]=='d' || s[0]=='e' || s[0]=='f' || s[0]=='o' || s[0]=='r' || s[0]=='c' || s[0]=='e' || s[0]=='s' ){
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