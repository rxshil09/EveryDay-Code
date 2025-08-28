#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    int n,f,k;
        cin>>n>>f>>k;

        // inputing the array arr
        int arr[n];
        for(int j=0;j<n;j++) cin>>arr[j];

        // sorting the brr array
        sort(arr, arr + n, greater<int>());

        int faValue = arr[f - 1];
  

    int countInFirstK = 0;
    int countAfterK = 0;

    // Count occurrences of favoriteValue in the first k elements
    for (int i = 0; i < k; ++i) {
        if (arr[i] == faValue) {
            ++countInFirstK;
        }
    }

    // Count occurrences of favoriteValue in elements after the first k
    for (int i = k; i < n; ++i) {
        if (arr[i] == faValue) {
            ++countAfterK;
        }
    }

    if (countInFirstK > 0 && countAfterK == 0) {
        cout<< "YES"<<endl;
    } else if (countInFirstK == 0 && countAfterK > 0) {
        cout<<"NO"<<endl;
    } else {
        cout<<"MAYBE"<<endl;
    }
           
         
	}
    return 0;
}