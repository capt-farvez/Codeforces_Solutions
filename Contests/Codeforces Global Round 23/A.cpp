#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k, count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1){
            count++;
        }
    }
    if(count){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}