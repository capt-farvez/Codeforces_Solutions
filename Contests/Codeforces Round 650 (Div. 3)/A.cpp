//Bismillahir Rahmanir Raheem //
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
    string s,t;
        cin>>s;
        int len = s.length();
        for(int i=0; i<len-1; i++){
            if(i == 0){
                t +=s[i];
            }
            if(s[i] == s[i-1]){
                t +=s[i];
                i++;
            }
        }
        t +=s[len-1];
        cout<<t<<endl;
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