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
	cin>>n;
	ll arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll cnt=1, ans=0;
    for(ll i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            cnt++;
            if(cnt>=3){
                //ans=arr[i];
                cout<<arr[i]<<endl;
                break;
            }
        }
        else{
            cnt=1;
        }
    }
    if(cnt<3){
        cout<<-1<<endl;
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