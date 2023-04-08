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

void solve(){
    ll n ; 
    cin >> n ;
	string s ;
	cin >> s ;

	string ans = "";

	for(int i = 0 ; i < n; i++){
		if(i + 2 < n && s[i+2] == '0' && (i + 3 == n || (s[i+3] != '0'))){
			ll temp = (s[i] -'0') * 10 + s[i+1] - '0' - 1;
			ans += char(temp + 'a');
			i += 2;
		}
		else{
			int temp = s[i] - '0' - 1 + 'a';
			ans += char(temp);
		}
		}
		cout << ans << endl;
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