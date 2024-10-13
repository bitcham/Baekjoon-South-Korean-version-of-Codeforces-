#include<bits/stdc++.h>
using namespace std;
int n, m;
string temp1, temp2;
int main(){
	cin >> n;
	while(n--){
		cin >> m;
		map<string, int> mp;
		for(int i = 0; i < m; i++){
			cin >> temp1 >> temp2;
			mp[temp2]++;
		}
		long long ret = 1;
		for(auto c: mp){
			ret *= ((long long)c.second + 1);
		}
		ret--;
		cout << ret << "\n";
	}
	return 0;
}