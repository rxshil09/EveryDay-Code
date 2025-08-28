#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n,x;
        cin>>n>>x;
        
        vector<int> a(n), b(n);
        
        for(int i = 0; i<n; i++) cin>>a[i];
        for(int i = 0; i<n; i++) cin>>b[i];
        
        // sort(a.begin(), a.end());
        
        // cout<<"a";
        // for(int p: a){
        //     cout<<p<<" ";
        // }
        // cout<<endl;
        // cout<<"b";
        // for(int p: b){
        //     cout<<p<<" ";
        // }
        
        // cout<<endl;

        // cout<<endl;
        vector<int> min_dif(n);
        
        for(int i = 0; i<n; i++){
            min_dif[i] = (b[i] - a[i] + 1);
        }
        
        // for(int p: min_dif){
        //     cout<<p<<" ";
        // }


        sort(min_dif.begin(), min_dif.end());
        
        int cnt = 0;
        
        for(int i = 0; i<n; i++){
            
            if(min_dif[i] <= 0) cnt++;
            else{
                if(x >= min_dif[i] && x > 0){
                    x -= min_dif[i];
                    cnt++;
                }
            }
        }
        
        if(cnt > n/2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
