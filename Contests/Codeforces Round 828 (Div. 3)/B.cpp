#include <bits/stdc++.h>
#define lli long long int
using namespace std;
void solving(){
    lli n , q , i , j, odd=0, even=0, sum=0;
   cin>>n>>q;
   lli arr[n];
   for(i=0; i<n; i++){
       cin>>arr[i];
       arr[i]&1?odd++:even++;
       sum+=arr[i];
   }
   int k=q;
   while(k--){
       cin>>i>>j;
       i?sum+=(odd*j):sum+=(even*j);
       cout<<sum<<endl;
       if(j&1){
           if(!i){
               odd=n, even=0;
           }
           else{
               odd=0, even=n;
           }
       }
   }
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