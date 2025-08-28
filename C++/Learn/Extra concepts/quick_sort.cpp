#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while( arr[i] <= pivot && i <= high - 1) i++;
        while( arr[j] > pivot && j >= low + 1) j--;

        if(i < j) swap (arr[i], arr[j]);
    }

    swap(arr[low], arr[j]); 
    return j;
}
void quick_sort(vector<int> &arr, int low, int high){

    if(low < high){

        int pindex = partition(arr, low, high);
        quick_sort(arr, low, pindex - 1);
        quick_sort(arr, pindex + 1, high);
    }
}


// time comp: worst case = O(n^2) cuz if we end up choosing the largest or smallest 
//                         element as the pivot always 
//            average or normal case = O(n*log n) 
// space comp: O(1)


int main(){

    int n;
    cin>>n;

    vector<int> v;
    for(int i = 0;i<n;i++){
        int input = 0;
        cin>>input;

        v.push_back(input);
    }

    quick_sort(v, 0, n-1);

    for(auto i: v){
        cout<<i<< " ";
    }

    return 0;
}