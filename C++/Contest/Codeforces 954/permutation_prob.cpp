#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	
	for(int k=0;k<t;k++)
	{
	    int n;
        cin>>n;

        int a[n];
        for(int j =0;j<n;j++){
	        cin>>a[j];
	    }

        int c = 0;

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n ; j++){
                if( (a[i]*a[j] ) % ( (i+1) * (j+1) ) == 0 ) c++;
	        }
	    }

        cout<<c<<endl;
	}

    return 0;
}