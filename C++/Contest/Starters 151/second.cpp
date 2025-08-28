#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        double d, x, y;
        cin >> d >> x >> y;

        if (y >= x)
            cout << "0" << endl;
        else
        {
            int count = 0;
            double dis = x;
            while (dis > y)
            {
                y--;
                if (y < 0) break;

                count++;
                dis = (x * (100 - (d * count))) / 100.0;
                cout<<"dis "<<dis<<" "<<y<<" "<<count<<endl;

            }

            if (y >= 0)
                cout << count << endl;
            else
                cout << "-1" << endl;
        }
    }
}
