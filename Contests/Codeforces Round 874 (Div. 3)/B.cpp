/* Bismillahir Rahmanir Raheem */
#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#define readFirst() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(x, y) __gcd(x, y)
#define pi M_PI
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define lp(strt,en) for(ll i=strt; i<en; i++)
using namespace std;
const int INF = 1e9;

bool is_prime(ll n){
    if (n < 2)
        return false;
    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}
ll digits_sum(ll n){
    ll sum = 0;
    while (n){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
/*************************** START ***************************/

void solve(){
    ll m,n;
    cin>>m>>n;
    ll arr1[m];
    vector<pair<ll,ll>> vc;
    lp(0,m){
        cin>>arr1[i];
        vc.pb({arr1[i],i});
    }
    sort(vc.begin(), vc.end());
    ll arr2[m];
    lp(0,m){
        cin>>arr2[i];
    }
    sort(arr2,arr2+m);
    ll arr3[m];
    lp(0,m){
        arr3[vc[i].second]=arr2[i];
    }
    lp(0,m){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

}


int main(){   
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    while (tCases--){
        solve();
    }
    return 0;
}