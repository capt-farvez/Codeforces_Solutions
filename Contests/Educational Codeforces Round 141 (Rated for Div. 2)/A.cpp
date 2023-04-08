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
// % = _ 
void solve()
{
    ll n;
    cin>>n;
    vector<ll>vc(n);
    for(ll i=0; i<n; i++){
        cin>>vc[i];
    }
    ll chk=0;
    for(ll i=0; i<n-1; i++){
        if(vc[i]!=vc[i+1]){
            chk=1;
            break;
        }
    }
    if(!chk){
        NO;
        return;
    }
    else{
        YES;
        ll l=0, h=n-1;
        while(l<h){
            cout<<vc[l]<<" ";
            cout<<vc[h]<<" ";
            l++ , h-- ;
        }
        if(n%2){
            cout<<vc[l]<<" ";
        }
        cout<<endl;
    }
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