#include<bits/stdc++.h>
using namespace std;
int n, c, temp;
unordered_map <int, int> mp1, mp2;
bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second) return mp2[a.first] < mp2[b.first];
	return a.second > b.second;
}
int main(){
	cin >> n >> c;
	for(int i = 0; i < n; i++){
		cin >> temp;
		mp1[temp]++;
		if(mp2.find(temp) == mp2.end()) {  
            mp2[temp] = i;
        }
	}
	vector<pair<int, int>> v(mp1.begin(), mp1.end());
	sort(v.begin(), v.end(), cmp);
	for(auto it : v){
		for(int i = 0; i < it.second; i++){
			cout << it.first << " ";
		}
	}
	return 0;
}