//  Bismillahir Rahmanir Raheem //
#include <bits/stdc++.h>
#define readFirst() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(x,y) __gcd(x,y)
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
    ll flag=1;
    for( ll i=0; i<n-1 && flag==1; i++){
        if(arr[i]<arr[i+1]){
            flag=0;
            while(arr[i+1]>=arr[i]  && i<n-1){
                i++;
            }
            if(i== (n-1)){
                YES;
                break;
            }
            else{
                NO;
            }
        }
    }
    if(flag){
        YES;
    }
}

int main(){
    readFirst();
    ll tCases;
    cin >> tCases;
    while(tCases--){
       solve();
    }
    return 0;
}