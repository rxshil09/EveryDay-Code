#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        
        int x_c = 0, y_c = 0;
        int ans = 0;
                    int old_x = x, old_y = y;

        
        if( x >= 2*y || y >= 2*x) cout<<0<<endl;
        else if( x == y) cout<< x - (x/2)<<endl;

        else if(x<y){
            while(x<2*y){
                x++;
                x_c++;
            }
            x = old_x;
            y = old_y;
            // cout<<"x_c"<<x_c<<endl;
            while(y<2*x){
                x--;
                // cout<<"1 ";
                y_c++;
            }
                        x = old_x;
            y = old_y;
                        // cout<<"y_c"<<y_c<<endl;
            ans = min(x_c, y_c);
            cout<<ans <<endl;
            
        }
        else if(y<x){
            
            while(y<2*x){
                y++;
                y_c++;
            }
                        x = old_x;
            y = old_y;
                        // cout<<"x_c"<<x_c<<endl;
            while(x<2*y){
                y--;
                x_c++;
            }
                        x = old_x;
            y = old_y;
                        // cout<<"y_c"<<y_c<<endl;
            ans = min(x_c, y_c);
            cout<<ans <<endl;
        }
        
        
    }
}
