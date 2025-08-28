#include <iostream>
using namespace std;


int count(long long a[], int n) {
    
    int c = 0;
    
    for (int i = 0; i < n; ++i) 
    {
        long long sum = 0;        
        for (int j = 0; j <= i; ++j) sum += a[j];
        
        for (int j = 0; j <= i; ++j)
        {
            if ( a[j] == (sum - a[j]) ) 
            {
                ++c;
                break;
            }
        }
    }
    
    return c;
}

int main() {
    int t;
    cin >> t;
    
    for(int i = 0;i<t;i++) {
        int n;
        cin >> n;
        
        long long arr[200000];
        for (int j = 0; j < n; ++j) cin >> arr[j];
        
        int result = count(arr, n);
        cout << result << '\n';
    }
    
    return 0;
}
