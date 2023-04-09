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
    ll n;
	cin>>n;
	if(n<=1399){
        cout<<"Division 4"<<endl;
    }
    else if(n>=1400 && n<=1599){
        cout<<"Division 3"<<endl;
    }
    else if(n>=1600 && n<=1899){
        cout<<"Division 2"<<endl;
    }
    else{
        cout<<"Division 1"<<endl;
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