#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
       int size;
        string s,s1;
        cin >> size >> s>>s1;
        if(s.size()!=s.size()){
            cout<<"NO"<<endl;
            return ;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]==s1[i] || (s[i]=='G'  && s1[i]=='B') || (s[i]=='B'  && s1[i]=='G') ){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return ;
            }
        }
        cout<<"YES"<<endl;
    }


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
     solve();
    }
    return 0;
}