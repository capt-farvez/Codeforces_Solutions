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

void solve(){
        ll a;
        cin >> a;
        if(a % 2 == 0) {
            for(ll i = 0; i < a - 2; i++){
                cout << 2 << " ";
            }
            cout << 3 << " " << 1<<endl;     
        }
        else{
             for(ll i = 0; i < a; i++){
                cout << 1 << " ";
            }
            cout<<endl;
        }
}

int main(){
    readFirst();
    ll tCases;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}