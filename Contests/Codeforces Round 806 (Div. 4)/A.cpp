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
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    //cout<<s<<endl;
    if(s[0]=='Y' && s[1]=='E' && s[2]=='S'){
        YES;
    }
    else{
        NO;
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