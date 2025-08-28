#include<bits/stdc++.h>
using namespace std;

string convert_2_binary(int n){

    string res = "";

    while(n != 1){

        if(n % 2 == 1) res += '1';
        else res += '0';
        n = n/2;
    }

    res += '1';
    reverse(res.begin(), res.end());

    return res;
}

int convert_2_decimal(string s){

    int ans = 0;
    int n = s.size();
    int p2 = 1;

    for(int i = n-1; i > -1; i--){
        
        if(s[i] == '1') ans+=p2;
        p2*=2;
    }

    return ans;
}

int ones_complement(int n){

    string s = convert_2_binary(n);
    string temp = s;

    for(char &bit: s){
        bit = (bit == '0') ? '1' : '0';
    }

    // if we want to return the string as the ans
    // cout << s;

    int ans = convert_2_decimal(s);
    return ans;
}

int main(){
    int n;
    cin>>n;

    // decimal to binary 
    // TC = O(logn), SC = O(logn)
    // cout<<"ans : "<<convert_2_binary(13458)<<endl;
    
    
    // binary to decimal
    // TC = O(n), SC = O(1)
    // cout<<"ans : "<<convert_2_decimal("11010010010010")<<endl;

    // 1's complement
    cout<<"1's complement: "<< ones_complement(4);
}