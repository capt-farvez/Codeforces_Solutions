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
    if (n < 2)
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
/*************************** START ***************************/

void solve(){
        ll n = 0;
        string s;
        
        cin >> n >> s;
        ll flag = 0;
        char a = '0';
        
        lp(0,s.size()){
            if(a == '0'){
                if(s[i] == 'm' || s[i] == 'M'){
                    a = s[i];
                }
                else{
                    flag = 1;
                }
                
                continue;
            }
            if(a == 'm' || a == 'M') {
                if(s[i] == 'E' || s[i] == 'e'){
                    a = s[i];
                }
                else if(s[i] != 'm' && s[i] != 'M'){
                    flag = 1;
                }
                
                continue;
            }
            if(a == 'e' || a == 'E') {
                if(s[i] == 'o' || s[i] == 'O'){
                    a = s[i];
                }
                else if(s[i] != 'e' && s[i] != 'E'){
                    flag = 1;
                }
                
                continue;
            }
            if(a == 'o' || a == 'O') {
                if(s[i] == 'w' || s[i] == 'W'){
                    a = s[i];
                }
                else if(s[i] != 'o' && s[i] != 'O'){
                    flag = 1;
                }
                
                continue;
            }
            if((a == 'w' || a == 'W') && (s[i] != 'w' && s[i] != 'W')){
                flag = 1;
            }
        }
        if(s[s.size() - 1] != 'w' && s[s.size() - 1] != 'W'){
            flag = 1;
        }
               
        if(flag){
            NO;
        }
        else{
            YES;
        }
}


int main(){   
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    while (tCases--){
        solve();
    }
    return 0;
}