#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
   string s1, s2=" ";
   cin>>s1;
   ll x;
   for(ll i=0; i<50; i++){
       s2+="Yes";
   }
   if((x=s2.find(s1, 0))==string::npos){
       cout<<"NO"<<endl;
   }
   else{
       cout<<"YES"<<endl;
   }
   
}
int main(){
    ll times;
    cin >> times;
    while(times--){
        solve();
    }
    return 0;
}