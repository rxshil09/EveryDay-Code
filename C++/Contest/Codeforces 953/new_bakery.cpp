#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    long long n,a,b;
        cin>>n>>a>>b;

        long long a1 = 0, k=0;

        for(long long i = 1;i<n;i++)
        {
            if( (b - i + 1) == a)  break;
            else {
                a1 = a1 + (b - i + 1)*i;
                k++;
            }
        }

        long long sum = (n-k)*a + a1;

        cout<<sum<<endl;
	}
}