#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        bool one = false;
        if(x != 1) one = true;

        if(one){
            cout<<"YES"<<endl<<n<<endl;
            for(int i = 0; i<n; i++) cout<<"1 ";
            cout<<endl;
        }
        else{

            if(k == 1) cout<<"NO"<<endl;
            else if(k == 2){
                if(n % 2 != 0) cout<<"NO"<<endl;
                else{
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i = 0; i<(n/2); i++) cout<<"2 ";
                    cout<<endl;
                }
            } 
            else{
                cout<<"YES"<<endl;
                int q = (n/2);
                cout<<q<<endl;
                for(int i = 0; i<q-1; i++){
                    cout<<"2 ";
                }
                if(n%2 == 0) cout<<"2"<<endl;
                else cout<<"3"<<endl;   
            }
            
        }

    }
}