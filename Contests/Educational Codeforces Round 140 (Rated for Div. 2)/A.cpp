//  Bismillahir Rahmanir Raheem //
#include <bits/stdc++.h>
#define readFirst() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(x, y) __gcd(x, y)
#define pi M_PI
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
using namespace std;

void solve(){
	ll arr[6];
    set<ll>s;
    for(ll i=0; i<6; i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(arr[0]!=arr[2] && arr[2]!=arr[4] && arr[0]!=arr[4]){
        YES;
    }
    else if(arr[1]!=arr[3] && arr[3]!=arr[5] && arr[1]!=arr[5]){
        YES;
    }
    else{
        NO;
    }
}
int main(){
    readFirst();
    ll tCases;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}