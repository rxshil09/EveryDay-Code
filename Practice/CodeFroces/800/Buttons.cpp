#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;

        bool anna = 1;
        if(c % 2 != 0) anna = 0;
        
        if(anna){
            if(a>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        } 
        else{
            if(a>=b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;    
        }


    }
}