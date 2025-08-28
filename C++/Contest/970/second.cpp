#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool yes = false;
        int r = 0;
        for (int i = 1; i < n; i++)
        {
            if (n == i * i)
            {
                r = i;
                yes = true;
                break;
            }
        }

        if(yes == false) cout<<"no"<<endl;
        else{
            // for(int i = 1; i<=n; i++){
            //     if(a[(i * r) - 1 ] == '1' and a[(i+1) * r - 1] == '1')
            // }

            for(int i = 2; i<r-1; i++){
                
            }
        }
    }

    return 0;
}