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
// % =  _
int arr[200009];

void solve(){
    ll n,s,r; 
    cin>>n>>s>>r;
    ll x=s-r;
    ll rem=(r%(n-1));
    ll m=(r/(n-1));
    cout<<x<<" ";
    for(ll i=1;i<n; i++){
        if(rem>0) {
            cout<<m+1<<" ";
            rem--;
        }
        else cout<<m<<" ";
    }
    cout<<endl;
}

int main()
{
    readFirst();
    // ll tCases=1;
    ll tCases;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}