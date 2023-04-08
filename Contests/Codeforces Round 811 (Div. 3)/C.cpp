#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n ;
        cin >> n;
        int sum=0;
        vector<int>v;
        if(n<=9){
            cout<<n<<endl;
        }
        else{
            for(int i=9; i>0; i--){
                sum+=i;
                if(sum>n){
                    sum-=i;       
                }
                else if(sum<=n){
                    v.push_back(i);
                }
                else break;
                
            }
            reverse(v.begin(), v.end());
            for(auto &x : v) 
            cout << x;
            cout << endl;
        }
    }
    return 0;
}