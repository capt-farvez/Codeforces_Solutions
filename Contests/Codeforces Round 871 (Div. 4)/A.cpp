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
bool cmp(pair<int, int> const &r1, pair<int, int> const &r2) {
    if (r1.first > r2.first) return false;
    else if (r1.first < r2.first) return true;
    return r1.second < r2.second;
}

void solve(){ 
    string s;
    cin>>s;
    ll cnt=0;
    if(s[0]!='c'){
        cnt++;
    }
    if(s[1]!='o'){
        cnt++;
    }
    if(s[2]!='d'){
        cnt++;
    }
    if(s[3]!='e'){
        cnt++;
    }
    if(s[4]!='f'){
        cnt++;
    }
    if(s[5]!='o'){
        cnt++;
    }
    if(s[6]!='r'){
        cnt++;
    }
    if(s[7]!='c'){
        cnt++;
    }
    if(s[8]!='e'){
        cnt++;
    }
    if(s[9]!='s'){
        cnt++;
    }
    cout<<cnt<<endl;
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