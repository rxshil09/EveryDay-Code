#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    
    for(int i = 0;i <= (n-2); i++){

        int mini = i;
        
        for(int j = i;j<n;j++){
            if(arr[j] < arr[mini]) mini = j;
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    // best, worst and average time comp is  approx O(n^2)
}
void bubble_sort(vector<int> &arr, int n){

    for(int i = n-1; i>=0; i--){

        int didswap = 0;
        for(int j = 0; j<=(i-1); j++){

            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;  
                didswap = 1;
            }
        }
        if(didswap == 0) break;
    }
    // best time comp is O(n) when array is already sorted 
    // worst and average is O(n^2)
}
void insertion_sort(vector<int> &arr, int n){

    for(int i = 0; i<n; i++){
        int j = i; 
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }

    
    //worst and average case time comp is O(n^2)
    // best case time comp is O(n)

}

int main(){

    int n;
    cin>>n;

    vector<int> arr;
    for(int i =0;i<n;i++){
        int input;
        cin>>input; 

        arr.push_back(input);
    } 

    // selection_sort(arr, n);
    bubble_sort(arr, n);
    // insertion_sort(arr, n);

    for(auto i:arr){
        cout<<i<<" ";
    }
    
    return 0;
}