#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n , h , m;
        cin >> n >> h >> m;
        int cur = h*60+m , ans = 1e9;
        for(int i = 0; i < n; i++){
            int x , y;
            cin >> x >> y;
            int curr = x*60+y , xx;
            if(curr < cur){
                xx = (24*60)-(cur-curr);
            }
            else{
                xx = curr-cur;
            }
            ans = min(ans , xx);
        }
        cout << ans/60 << " " << ans%60 << "\n";
    }
    return 0;
}