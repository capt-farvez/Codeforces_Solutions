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
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
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

void solve()
{
    ll n;
    cin>>n;
    ll arr1[n], arr2[n];
    for(ll i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(ll i=0; i<n; i++){
        cin>>arr2[i];
    }
    for(ll i=0; i<n; i++){
        if(arr1[i]>arr2[i]){
            swap(arr1[i], arr2[i]);
        }
    }
    ll mx1 = *max_element(arr1, arr1 + n);
    ll mx2 = *max_element(arr2, arr2 + n);
    if(arr1[n-1]==mx1 && arr2[n-1]==mx2){
        YES;
    }
    else{
        NO;
    }
    return;
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