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
// %   =_ 

void solve()
{   
   ll n;
   cin>>n;
   ll arr[n];
   vector<ll>evec;
   vector<ll>ovec;
   for(ll i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        evec.push_back(i+1);
    }
    else{
        ovec.push_back(i+1);
    }
   }
   if(evec.size()>=2 && ovec.size()>0){
    YES;
    for(ll i=0; i<2; i++){
        cout<<evec[i]<<" ";
    }
    cout<<ovec[0]<<endl;
   }
   else if(ovec.size()>2){
    YES;
    for(ll i=0; i<3; i++){
        cout<<ovec[i]<<" ";
    }
    cout<<endl;
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