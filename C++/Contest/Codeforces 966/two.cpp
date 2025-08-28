#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        int c = 0;
        for(int i = 1; i<n; i++){
            for(int j = 0; j<i; j++){

                if(a[j] == (a[i] - 1) || a[j] == (a[i] + 1)){
                    c++;
                }
                
            }
        }

        if(c >= n-1) cout<<"YES"<<endl;
        else cout<<"no"<<endl;
        
    }

    return 0;
}