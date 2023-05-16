/* Bismillahir Rahmanir Raheem */
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
#define lp(strt,en) for(ll i=strt; i<en; i++)
using namespace std;
const int INF = 1e9;

bool is_prime(ll n){
    if (n < 2)
        return false;
    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}
ll digits_sum(ll n){
    ll sum = 0;
    while (n){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
/*************************** START ***************************/


void solve(){ 
    string str;
    cin>>str;
    ll sz=str.size();
    set<char>s;
    // string str2=str;
    // reverse(str2.begin(), str2.end());
    //cout<<str2<<endl;
    lp(0,sz){
        s.insert(str[i]);
    }
    // if(str==str2){
    //     cout<<-1<<endl;
    // }
    if(s.size()==1){
        cout<<-1<<endl;
    }
    else{
        cout<<sz-1<<endl;
    }
}

int main(){   
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}