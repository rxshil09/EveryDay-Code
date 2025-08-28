#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    int x1,x2,x3;
        cin>>x1>>x2>>x3;

        int ans = 0;
        ans= min( (abs(x1-x1) + abs(x2-x1) + abs(x3-x1)), min( (abs(x1-x2) + abs(x2-x2) + abs(x3-x2)), (abs(x1-x3) + abs(x2-x3) + abs(x3-x3)) ));
	    
        cout<<ans<<endl;
	}
    return 0;
}