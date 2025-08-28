#include<bits/stdc++.h>
using namespace std;

bool isOnLine(int x1, int y1, int x2, int y2, int x, int y) {
    return (x - x1) * (y2 - y1) == (y - y1) * (x2 - x1);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s;
        cin>>n>>s;

        vector<int> dx(n), dy(n), x(n),y(n);
        for(int i = 0; i<n; i++){
            cin>>dx[i]>>dy[i]>>x[i]>>y[i];
        }

        int balls = 0;
        for(int i = 0; i<n; i++){
            if(isOnLine(0,0,s,s,x[i],y[i]) && ((dx[i] == 1 && dy[i] == 1) || (dx[i] == -1 && dy[i] == -1))|| 
            isOnLine(0,s,s,0,x[i],y[i]) && ((dx[i] == 1 && dy[i] == -1) || (dx[i] == -1 && dy[i] == 1))) balls++;
        }

        cout<<balls<<endl;  
    }
}