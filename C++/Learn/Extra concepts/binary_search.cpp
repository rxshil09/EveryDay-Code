#include<bits/stdc++.h>
using namespace std;

int binary_search_recursion(vector<int>& a, int low, int high, int target){

    if( low > high ) return -1;
    int mid = ( low + high )/2;

    if ( a[mid] == target ) return mid;
    else if( target > a[mid] ) return binary_search_recursion(a, mid+1, high, target);
    return binary_search_recursion(a, low, mid - 1, target); 
}

int binary_search_iterative(vector<int>& a, int n, int target){
    
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        
        if(a[mid] == target) return mid;
        else if(target > a[mid]) low = mid + 1;
        else high = mid - 1; 
    }

    return -1;
}

// always applicable for sorted areas
int main(){

    int n, k;
    cin>>n>>k;

    vector<int> v;
    for(int i = 0; i<n; i++){
        int inp;
        cin>>inp;

        v.push_back(inp);
    }

    // cout<< binary_search_iterative(v, n, k);
    // cout<< binary_search_recursion(v, 0, n-1, k);
    
    

    return 0;
}