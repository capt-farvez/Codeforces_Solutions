#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<vector<string>> inp;
    for (int i = 0; i < 3; i++)
    {
        vector<string> st;
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            mp[s]++;
            st.push_back(s);
        }
        inp.push_back(st);
    }
    vector<int> res(3, 0);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mp[inp[i][j]] == 1)
            {
                res[i] += 3;
            }
            else if (mp[inp[i][j]] == 2)
            {
                res[i] += 1;
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
        {
            cout << res[i] << " ";
        }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}