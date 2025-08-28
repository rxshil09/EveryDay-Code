#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int c = 0;

        for(int i = 0, j = 1; i < n,j<n; i++,j++) {
                int pro = a[i] * a[j];
                int index_pro = (i + 1) * (j + 1);
                
                if(pro % index_pro == 0) c++;
        }

        cout << c << endl;
    }

    return 0;
}
