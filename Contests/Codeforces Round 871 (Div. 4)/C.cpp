//  Bismillahir Rahmanir Raheem //
#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#define readFirst() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(x, y) __gcd(x, y)
#define pi M_PI
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define lp(n) for(ll i=0; i<n; i++)
using namespace std;
const int INF = 1e9;

bool is_prime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll digits_sum(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}


void solve(){ 
    ll n;
    cin>>n;
    vector<pair<ll,string>>v(n);
    ll a = 0, b =0,c = 0;
    lp(n){
        ll m;
        string s;
        cin>>m>>s;
        v[i] = {m,s};
    }
    sort(v.begin(),v.end());
    lp(n){
        string bs = v[i].second;
        // cout<<bs[0]<<endl;
        if(a == 0 && bs[0] == '1' && bs[1] == '0')
            a = v[i].first;
        if(b == 0 && bs[1] == '1' && bs[0] == '0')
            b = v[i].first;
        
        if(c == 0 && bs[1] == '1' && bs[0] == '1')
            c = v[i].first;
        
        if(a > 0 && b > 0 && c >0)
            break;
    }
    // cout<<a<<" "<<b<<" "<<c<<endl;
    if(c == 0){
        if((a == 0 || b == 0) ){
            cout<<"-1\n";
            return;
        }else{
            cout<<a + b<<endl;
        }
    }
    else{
        if(a == 0 || b == 0){
            cout<<c<<endl;
        }
        else{
            // cout<<a + b<<endl;
            cout<<min(a+b , c)<<endl;;
        }
    }
    // for (int i=0; i<n; i++){
    //     if(v[i].second=='11'){
    //         a=v[i].first;
    //         break;
    //     }
    // }
    // for (int i=0; i<n; i++){
    //     if(v[i].second=='10'){
    //         b=v[i].first;
    //         break;
    //     }
    // }
    // for (int i=0; i<n; i++){
    //     if(v[i].second=='01'){
    //         c=v[i].first;
    //         break;
    //     }
    // }
    // if(a==0 && b==0 & c==0 ){
    //     cout<<-1<<endl;
    // }
    // else if(a==0 & b==0){
    //     cout<<-1<<endl;
    // }
    // else if(a==0 & c==0){
    //     cout<<-1<<endl;
    // }
    // else if(a<b+c){
    //     cout<<a<<endl;
    // }
    // else{
    //     cout<<b+c<<endl;
    // }

}

int main()
{
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}