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
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
using namespace std;

double find_f(ll n) {
    ll c = 1;
    double f = 0.0;
    while (true) {
        ll value = tgamma(2*f+1) + c;
        if (value > n) {
            break;
        } 
		else if (value == n) {
            return round(f * 100) / 100.0;
        }
        f += 0.01;
    }
    return -1;
}



void solve(){
    ll n;
    cin>>n;
    if(n==3){
        cout<<-1<<endl;
        return;
    }
    ll arr[n];
    ll l = 0;
    for(ll i = n; i>=1; i--){   
        arr[l++] = i;
    }
    l = 1;
    if(n%2 && n>3){
        for(ll i = n/2; i<n; i++){
            arr[i] = l++;
        }
    }
    for(ll i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
	readFirst();
	ll tCases=1;
	cin >> tCases;
	while (tCases--)
	{
		solve();
	}
	return 0;
}