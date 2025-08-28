#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    int n,m;
        cin>>n>>m;

        string ar;
        cin>>ar;

        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
            
            for(int q = 0; q < n; q++){
                
                if(ar[q] == 'A') a++;
                else if(ar[q] == 'B') b++;
                else if(ar[q] == 'C') c++;
                else if(ar[q] == 'D') d++;
                else if(ar[q] == 'E') e++;
                else if(ar[q] == 'F') f++;
                else if(ar[q] == 'G') g++;
            }        

        int count=0;
        if(a < m) count+=(m-a);
        if(b < m) count+=(m-b);
        if(c < m) count+=(m-c);
        if(d < m) count+=(m-d);
        if(e < m) count+=(m-e);
        if(f < m) count+=(m-f);
        if(g < m) count+=(m-g);
        cout<< count<<endl;
	}

    return 0;
}