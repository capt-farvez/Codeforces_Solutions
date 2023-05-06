//  Bismillahir Rahmanir Raheem //
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
#define lp(n) for(ll i=0; i<n; i++)
using namespace std;

bool is_prime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll digits_sum(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

void solve(){ 
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0; i < n; i++){
            cin>>a[i];
        }
    for(ll i = 0; i < n/2; i++){
        // if(n-i-i == i){
        //     cout<<a[i]<<" ";
        // }
        // else{
            cout<<a[i]<<" "<<a[n-1-i]<<" ";
        //} 
    }   
    if(n%2!=0){
        cout<<a[n/2];
    }
    cout<<endl;
}

int main()
{
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}