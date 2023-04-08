#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
 ll l,r,x,a,b;
 cin>>l>>r>>x>>a>>b;
 ll dif1, dif2, dif3, dif4, dif5;
 dif1=abs(a-l);
 dif2=abs(r-a);
 dif3=abs(b-l);
 dif4=abs(r-b);
 dif5=abs(a-b);
 if(a==b){
     cout<<0<<endl;
 }
 else if(dif5>=x){
     cout<<1<<endl;
 }
 else if((dif1<x && dif2<x)  || (dif3<x && dif4<x)){
     cout<<-1<<endl;
 }
 else{
     if(dif1<x){
         if(dif4>=x){
            cout<<2<<endl;
         }
         else{
             cout<<3<<endl;
         }
     }
     else if(dif2<x){
         if(dif3>=x){
             cout<<2<<endl;
         }
         else{
             cout<<3<<endl;
         }
     }
     else{
         cout<<2<<endl;
     }
        
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