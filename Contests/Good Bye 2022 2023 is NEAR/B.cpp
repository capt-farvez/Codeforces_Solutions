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
// % ==

void solve()
{
    ll n, m;
    cin >> n>>m;
    vector<ll>arr1(n);
    for(ll i=0; i<n; i++){
        arr1[i]=i+1;
    }
    ll x=0, y=n-1;
    while(x<y){
        cout<<arr1[y--]<<" "<<arr1[x++]<<" ";
    }
    if(n%2==1){
            cout<<(n+1)/2;
        }
    cout<<endl;
    
}

int main()
{
    readFirst();
    ll tCases;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}