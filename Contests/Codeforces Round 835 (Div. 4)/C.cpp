//  Bismillahir Rahmanir Raheem //
#include <bits/stdc++.h>
#define readFirst() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(x,y) __gcd(x,y)
#define pi M_PI
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll arr[n], carr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    for(ll i=0; i<n; i++){
        carr[i]=arr[i];
    }
    sort(carr, carr+n);
        ll fm=carr[n-1], sm=carr[n-2];
        //cout<<fm<<" "<<sm;
    for(ll i=0; i<n; i++){
        if(arr[i]==carr[n-1]){
            cout<<arr[i]-sm<<" ";
        }
        else{
            cout<<arr[i]-fm<<" ";
        }
    }
    cout<<endl;
}

int main(){
    readFirst();
    ll tCases;
    cin >> tCases;
    while(tCases--){
       solve();
    }
    return 0;
}