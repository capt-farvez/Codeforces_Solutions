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
    ll sz, query;
    cin >> sz >> query;
    ll arr[sz+1], array[sz+1] = {0};
    ll a, b, c;
    ll sum = 0;
    for(ll i = 1; i <= sz; i++){
        cin >> arr[i];
        sum += arr[i];
        array[i] += array[i-1]+arr[i];
    }
    ll main_sum = sum;
    while(query--){
        cin >> a >> b >> c;
        ll tmp = array[b]-array[a-1];
        sum -= tmp;
        sum += (b-a+1)*c;
        if(sum%2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        sum = main_sum;
    }
    return;
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