#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i<n; i++) cin>>a[i];
        
        vector<int> b;
        vector<int> c;

        int i = 0;
        while(i<n){
            for(int j = 0; j<n && i<n && b.size() + c.size() < n; j++){
                if(i == j) continue;
                else{
                    if(a[i] % a[j] != 0){
                        c.push_back(a[j]);
                        b.push_back(a[i]);
                        i++;
                    } 
                }
            }
            i++;
        }

        if(c.empty()) cout<<-1<<endl;
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i : b) cout<<i<<" ";
            cout<<endl;
            for(int i : c) cout<<i<<" ";
            cout<<endl;
        }
    }
}