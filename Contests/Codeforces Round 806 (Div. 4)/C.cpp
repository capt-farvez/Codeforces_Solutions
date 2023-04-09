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
        ll n;
		cin >> n;
		ll arr[n];
		for(int i = 0; i < n; i++){
            cin >> arr[i];
        }	
		for(ll i = 0; i < n; i++){
			ll x;
			cin >> x;
			string str;
            cin>>str;
			for(ll j = 0; j < x; j++){
				if(str[j] == 'D'){
					if(arr[i] == 9){
                        arr[i] = 0;
                    }
					else {
                        arr[i]++;
                    }
				}
				else if(str[j] == 'U'){
					if(arr[i] == 0){
                        arr[i] = 9;
                    }	
					else arr[i]--;
				}
			}
			cout << arr[i] << " ";
		}
		cout << endl;
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