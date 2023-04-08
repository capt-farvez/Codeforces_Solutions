#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        lli n, count=0;
    cin>>n;
    lli arr[n];
    for(lli j=0; j<n; j++){
        cin>>arr[j];
    }
    for(lli i=0, j=n-1; i<j;){
        if(arr[i]==1 && arr[j]==0){
            count++;
            i++;
            j--;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[j]==0){
            i++;
        }
    }
    cout<<count<<endl;
    
    }
    return 0;
}