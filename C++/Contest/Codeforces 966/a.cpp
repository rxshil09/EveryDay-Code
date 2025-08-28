#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n); // Correctly initialize the vector with size n
        bool allHaveNeighbors = true; // Flag to check the condition

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        for(int i = 0; i < n; i++){
            int add = v[i] + 1;
            int sub = v[i] - 1;

            auto it1 = find(v.begin(), v.end(), add);
            auto it2 = find(v.begin(), v.end(), sub);

            if(it1 == v.end() && it2 == v.end()) {
                allHaveNeighbors = false;
                break; // Break out of the loop if any element doesn't satisfy the condition
            }
        }
    
        if(allHaveNeighbors) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
