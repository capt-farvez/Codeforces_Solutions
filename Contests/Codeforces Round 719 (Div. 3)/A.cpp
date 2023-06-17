//  Bismillahir Rahmanir Raheem //
#include <bits/stdc++.h>
#define readFirst() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(a, b) __gcd(a, b)
#define pi M_PI
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
using namespace std;
// % =  _

void solve()
{
	ll n;
	cin >> n;
    string s;  
	cin >> s;
    set<char> st;
    char prev = s[0];
    st.insert(s[0]);
    for(ll i = 1; i < n; i++){
       if(s[i] == s[i-1])
         st.insert(s[i]);
       else{
         if(st.find(s[i]) != st.end()){
             No;
             return;
         }
		 st.insert(s[i]);
       }
    }
	Yes;
	
}
int main()
{
	readFirst();
	// ll tCases = 1;
	ll tCases, cunt = 0;
	cin >> tCases;
	while (tCases--)
	{
		// cunt++;
		// cout << "Case " << cunt;
		solve();
	}
	return 0;
}
