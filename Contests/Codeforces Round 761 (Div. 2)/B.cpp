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
// % =  _

void solve()
{  
	ll n;
	cin>>n;
	ll prm[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	if(n%2==0){
		cout<<2<<" "<<n-3<<" "<<1<<endl;
	}
	else{
		for(ll i=0; i<15; i++){
			if(gcd(prm[i],(n-prm[i]-1))==1){
				cout<<prm[i]<<" "<<(n-prm[i]-1)<<" "<<1<<endl;
				break;
			}
		}
	}
}

int main()
{
    readFirst();
    //ll tCases=1;
    ll tCases, cnt = 0;
    cin >> tCases;
    while (tCases--)
    {
        // cnt++;
        // cout << "Case " << cnt;
        solve();
    }
    return 0;
}