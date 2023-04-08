#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, count=0;
        string s;
        cin >> size >> s;
        sort(s.begin(),s.end());
        string s1="Timur";
        sort(s1.begin(),s1.end());
        if(s==s1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}