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
// %

void solve()
{
    ll n, m;
    cin >> n;
    ll arr[n];
    ll fstOdd = 0, fstEven = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            fstEven++;
        }
        else
        {
            fstOdd++;
        }
    }
    if (fstEven == n || fstOdd == n)
    {
        YES;
    }
    else
    {
        ll scdOdd=0, trdOdd=0, scdEven=0, trdEven=0;
        for (ll i = 0; i < n; i += 2)
        {
            arr[i] += 1;
        }
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                scdEven++;
            }
            else
            {
                scdOdd++;
            }
        }
        for (ll i = 1; i < n; i += 2)
        {
            arr[i] += 1;
        }
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                trdEven++;
            }
            else
            {
                trdOdd++;
            }
        }

        if(scdOdd==n || scdEven==n || trdEven==n || trdOdd==n){
            YES;
        }
        else{
            NO;
        }
       
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