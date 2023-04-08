    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;
        cin >> t;
        
        while(t--)
        {
            int n , m;
            cin >> n >> m;
            string a ,b;
            cin >> a >>  b;
            int i = n-1 , j = m-1;
            bool f = true;
            
            while(j > 0 && f)
            {
                if(a[i] != b[j])
                f = false;
                i--;
                j--;
            }
            
            if(f){
                f = false;
                for(int k=0;k<=i;k++)
                {
                    if(a[k] == b[j])
                    f = true;
                }
                
                cout << ((f) ? "YES" : "NO") <<endl;
            }
            else{
                cout << "NO" <<endl;
                }
        }
    }