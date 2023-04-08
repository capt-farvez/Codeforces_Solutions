#include <bits/stdc++.h>
#define lli long long int
using namespace std;
void solving(){
    lli n; 
    cin>>n;
    lli array[n];
    for(lli i=0; i<n; i++){
        cin>>array[i];
    }
    string s;
    cin>>s;
    for(lli i=0; i<n; i++){
        lli x=array[i];
        char c=s[i];
        for(lli j=0; j<n; j++){
            if(array[j]==x && s[j]!=c){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    return;
}
 
int main()
{
   int t;
   cin>>t;
   while (t--){
       solving();
   }
    return 0;
}