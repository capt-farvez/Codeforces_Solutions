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

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    vector<int> v1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            v1.pb(i);
        }
    }
    if (v1.size() == 0)
    {
        cout << "1" << endl;
    }
    else if (v1.size() % 2 == 0)
    {
        cout<<v1[(v1.size()-1)/2]+1<<endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    readFirst();
    // ll tCases=1;
    ll tCases, cnt = 0;
    cin >> tCases;
    while (tCases--)
    {
        // cnt++;
        // cout << "Case " << cnt;
        solve();
    }
    return 0;
}
