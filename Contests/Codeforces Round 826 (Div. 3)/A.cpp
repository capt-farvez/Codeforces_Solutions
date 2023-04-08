    #include <bits/stdc++.h>
    using namespace std;
     
    void solve(){
        string a,b;
        cin>>a>>b;
        int xx=0, yy=0;
        for(int i=0, j=0; i<a.length(),j<b.length(); i++, j++){
            if(a[i]=='X'){
                xx++;
            }     
            if(b[i]=='X'){
                  yy++;
            }      
        }
        if(a[a.length()-1]=='S' && b[b.length()-1]=='M'){
            cout<<"<"<<endl;
        }
        else if(a[a.length()-1]=='S' && b[b.length()-1]=='L'){
            cout<<"<"<<endl;
        }    
        else if(a[a.length()-1]=='M' && b[b.length()-1]=='L'){
            cout<<"<"<<endl;
        }        
        else if(a[a.length()-1]=='M' && b[b.length()-1]=='S'){
            cout<<">"<<endl;
        }      
        else if(a[a.length()-1]=='L' && b[b.length()-1]=='S'){
            cout<<">"<<endl;
        }  
        else if(a[a.length()-1]=='L' && b[b.length()-1]=='M'){
            cout<<">"<<endl;
        }
        else{
            if(a[a.length()-1]=='S'){
                if(xx==yy){
                    cout<<"="<<endl;
                }   
                else if(xx>yy){
                    cout<<"<"<<endl;
                }   
                else{
                    cout<<">"<<endl;
                }      
            }
            else{
                 if(xx==yy){
                    cout<<"="<<endl;
                }   
                else if(xx>yy){
                    cout<<">"<<endl;
                }   
                else{
                    cout<<"<"<<endl;
                }
            }
        }
    }
    int main(){
        int n;
        cin >> n;
        while(n--){
            solve();
        }
        return 0;
    }