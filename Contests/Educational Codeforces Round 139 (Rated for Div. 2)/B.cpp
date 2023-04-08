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
   string s;
   cin>>n>>s;
   if(n==1){
	NO;
   }
   else{
	ll cnt=0;
	for(ll i=0; i<n-3; i++){
		for(ll j=i+2; j<n-1; j++){
			if(s[i]==s[j] && s[i+1]==s[j+1]){
				cnt++;
				YES;
				return;
				//cout<<s[i]<<s[i+1]<<s[j]<<s[j+1]<<"check"<<endl;
			}
		}
	}
	if(cnt==0){
	NO;
   }

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