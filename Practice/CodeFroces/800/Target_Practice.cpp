#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        
        vector<vector<char>> arr(10, vector<char>(10));

        int one = 0, two = 0, three = 0, four = 0, five = 0;

        for(int i = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                cin>>arr[i][j];
            }
        }

        for(int i = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                
                if(arr[i][j] == 'X'){

                    if((i>3 && i<6) && (j>3 && j<6)) five++;
                    else if((i>2 && i<7) && (j>2 && j<7)) four++;
                    else if((i>1 && i<8) && (j>1 && j<8)) three++;
                    else if((i>0 && i<9) && (j>0 && j<9)) two++;
                    else one++;
                }
            }
        }

        int score = 1*one + 2*two + 3*three + 4*four + 5*five;
        cout<<score<<endl;
    }
}