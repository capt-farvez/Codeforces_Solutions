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
    ll arr[n];
    ll total=0;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        total+=arr[i];
    }
    ll x=0;
    for(ll i=0; i<n; i++){
        if(arr[i]==(-1)){
            x=1;
            if(arr[i+1]==-1){
                x=2;
                break;
            }
        }
    }
    if(x==2){
        cout<<total+4<<endl;
    }
    else if(x==0){
        cout<<total-4<<endl;
    }
    else{
        cout<<total<<endl;
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