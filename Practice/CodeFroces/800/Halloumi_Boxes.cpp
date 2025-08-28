#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        
        int n, k;
        cin>>n>>k;

        vector<long long> arr(n);
        for(int i = 0; i<n; i++) cin>>arr[i];

        bool sorted = true;

        for(int i = 1; i<n; i++){

            if(arr[i-1] > arr[i]){
                sorted = false;
                break;
            }
        }

        if(sorted) cout<<"yes"<<endl;
        else{
            if(k == 1) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }   

    }
}