#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        bool ans = true;

        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        if(arr[0] == 1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;

        // my approach
        
        // bool sorted = 1;

        // for(int j = 0; j<n; j++){
        //     for(int i = 2; i<n; i++){
        //         if(arr[i-2] < arr[i-1] && arr[i-1] > arr[i]){
        //             swap(arr[i-1], arr[i]);
        //         }
        //     }
        // }

        // for(int i = 1; i<n; i++){
        //     if(arr[i-1] > arr[i]) sorted = 0;
        // }
        
        // if(sorted) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;

    }
}