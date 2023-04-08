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
// % =
void solve()
{   
        ll n, cntR=-1, cntL=-1;
		cin >> n;	
        string str;
        cin>>str;
         for(int i=0; i<n-1; i++){
            if(str[i]=='R' && str[i+1]=='L'){
                cntR=i+1;
            }
            if(str[i]=='L' && str[i+1]=='R'){
                cntL=i+1;
            }   
        }

        if(cntR==-1 && cntL==-1){
            cout<<-1<<endl;
        }
        else{
            if(cntR>=0){
                cout<<0<<endl;
            } 
            else{
                cout<<cntL<<endl;
            }   
        }

}
int main()
{
    readFirst();
    ll tCases;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}