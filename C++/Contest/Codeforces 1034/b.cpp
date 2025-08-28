#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,j,k;
        cin>>n>>j>>k;

        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        int cnt = 0;
        int repeat = 0;
        
        for(int i = 0; i<n; i++){
            if(arr[j-1] > arr[i]) cnt++;
        }

        unordered_map<int, int> freq;
        // Count frequencies
        for (int num : arr) {
            freq[num]++;
        }
        // Display repetition
        for (const auto& pair : freq) {
            // std::cout << "Number " << pair.first << " occurs " << pair.second << " time(s).\n";
            if(pair.second > 1) repeat+= (pair.second-1);
        }

        // cout<<"-------------------"<<endl;
        // cout<<cnt<<" "<<repeat<<endl;
        if(repeat + cnt >= (n-k)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }
}