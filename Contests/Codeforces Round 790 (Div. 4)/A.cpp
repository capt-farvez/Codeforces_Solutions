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
	string s;
    cin>>s;
    ll s1=0, s2=0;
    for(ll i=0; i<3; i++){
        s1+=(s[i]-48);
    }
      for(ll i=3; i<6; i++){
        s2+=(s[i]-48);
    }
    //cout<<s1<<" "<<s2<<endl;
    if(s1==s2){
        YES;
    }
    else{
        NO;
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