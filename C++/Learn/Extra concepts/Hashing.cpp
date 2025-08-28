#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // NUMBER HASHING

	// int n;
	// cin>>n;

	// int a[n];

	// for(int i = 0;i<n;i++) cin>>a[i];
	
	// // precompute
	// int hash[13] = {0}; 
	
	// /*
	// 	size should be the maximum given in question
	// 	here size is 12 so we take 13, if size is 
	// 	100000(10^5) so take size of hash as 100001
	// */

	// for (int i = 0; i < n; i++)
	// {
	// 	hash[a[i]] += 1;
	// }
	

	// int q;
	// cin>>q;

	// while(q--){
	// 	int num;
	// 	cin>>num;
		
	// 	//fetch
	// 	cout<<hash[num]<<endl;
	// }
    
    /* 
    testcase:
        5
        1 3 2 1 3
        5
        1
        4
        2
        3
        12
	*/



    //CHARACTER HASHING

    string s;
    cin>>s;

    //pre compute
    int hash[256] = {0};
    for(int i = 0;i<s.size();i++){
        hash[ s[i] ] ++;
    }

    int q;
    cin>>q;

    while(q--){
        char c;
        cin>>c;

        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}