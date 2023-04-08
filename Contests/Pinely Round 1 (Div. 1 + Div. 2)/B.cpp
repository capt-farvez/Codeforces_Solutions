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
    set<int> arr;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        arr.insert(x);
    }
    if(arr.size()>2){
        cout<<n<<endl;
    }
    else if(arr.size()==1){
        cout<<1<<endl;
    }
    else{
        cout<<2+((n-2)/2)<<endl;
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