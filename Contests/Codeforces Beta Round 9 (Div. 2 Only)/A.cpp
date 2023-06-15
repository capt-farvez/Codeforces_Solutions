/* Bismillahir Rahmanir Raheem */
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
#define lp(strt,en) for(ll i=strt; i<en; i++)
using namespace std;
const int INF = 1e9;

bool is_prime(ll n){
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}
ll digits_sum(ll n){
    ll sum = 0;
    while (n){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

vll prime_numbers;
void sieve(ll n){
    prime_numbers.resize(n + 1, true);
    prime_numbers[0] = prime_numbers[1] = false;
    for(ll i=2; i <= sqrt(n); i++){
        if (prime_numbers[i]) {
            for(ll j=i*i; j<=n; j+=i) {
                prime_numbers[j] = false;
            }
        }
    }
}

/*************************** START ***************************/


void solve(){
    ll a,b;
    cin>>a>>b;
    ll maxi=max(a,b);

    if(maxi==1){
        cout<<"1/1"<<endl;
    }
    else if(maxi==2){
        cout<<"5/6"<<endl;
    }
    else if(maxi==3){
        cout<<"2/3"<<endl;
    }
    else if(maxi==4){
        cout<<"1/2"<<endl;
    }
    else if(maxi==5){
        cout<<"1/3"<<endl;
    }
    else{
        cout<<"1/6"<<endl;
    }
}


int main(){   
    readFirst();
    ll tCases = 1;
    //cin >> tCases;
    //ll cnt=1;
    while (tCases--){
        solve();
        //cnt++;
    }
    return 0;
}