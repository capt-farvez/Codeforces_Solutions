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
// % =
void solve()
{
    string s;
    cin >> s;
    ll n = s.size();

    ll ans = -1;
    if ((s[n - 1] - 48) % 2 == 0)
    {
        ans = 0;
    }
    else if ((s[0] - 48) % 2 == 0)
    {
        ans = 1;
    }
    else
    {
        bool chk = false;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] - 48) % 2 == 0)
            {
                chk = true;
                break;
            }
        }
        if (chk)
        {
            ans = 2;
        }
    }
    cout << ans <<endl;
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