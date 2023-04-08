#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << n << " ";
        if (n > 1)
        {
            for (ll i = 1; i < n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}