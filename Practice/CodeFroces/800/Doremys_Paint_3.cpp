#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i<n; i++) cin>>arr[i];


        // my implementation

        // int k = arr[0] + arr[1];
        // bool ok = 1;

        // for(int i = 0; i<n; i++){
            
        //     for(int j = 1; j<n; j++){
        //         if((arr[j] + arr[j-1]) == k) continue;
        //         else{
        //             swap(arr[j-1], arr[j]);
        //             k = arr[j-1] + arr[j];
        //             ok = 0;
        //         }
        //     }

        //     if(ok) break;
        // }

        // int ans = 0;

        // for(int i = 1; i<n; i++){
        //     if((arr[i] + arr[i-1]) == k){
        //         ans++;
        //     }
        // }

        // if(ans == (n-1)) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;


        // cp-31 implementation 
        // we want to check if there exists more than 2 distinct integers in the array and if the 2 distinct integers have frequency f1 and f2. therefore abs(f1 - f2) == 1

        map<int, int> s;
        for(int i = 0; i<n; i++){
            s[arr[i]]++;
        }

        if(s.size() > 2) cout<<"no"<<endl;
        else{
            int f1 = s.begin()->second;
            int f2 = s.rbegin()->second;
            
            if((f1 == f2) || (abs(f1 - f2) == 1 && n%2 == 1)) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
}