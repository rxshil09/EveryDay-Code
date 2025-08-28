#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i = 0 ; i<n; i++) cin>>arr[i];

        bool yes = false;
        for(int i = 0; i<n; i++){
            if(arr[i] == k){
                yes = true;
                break;
            }
        }

        if(yes) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}