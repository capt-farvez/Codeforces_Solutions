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
   string s;
   char c;
   cin>>s>>c;
   ll sz=s.size();
   ll flag=0;
   for(ll i=0; i<sz; i++){
    if(s[i]==c  && i%2!=1){
        flag++;
        break;
    }
   }
   if(flag){
    YES;
   }
   else{
    NO;
   }
}

int main()
{
    readFirst();
    //ll tCases=1;
    ll tCases;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}