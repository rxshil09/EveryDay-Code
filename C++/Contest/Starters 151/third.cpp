#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v;

	for(int i = 0;i<10;i++){
		int inp;
		cin>>inp;

		v.push_back(inp);
	}

	for(auto i: v){
		cout<<i<<" ";
	}


}
