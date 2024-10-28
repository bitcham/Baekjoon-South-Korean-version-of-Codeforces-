#include<bits/stdc++.h>
using namespace std;
int n, m, temp, root;
vector<int> a[51];
int dfs(int here){
	int ret = 0;
	int child = 0;
	for(auto there : a[here]){
		if(there == m) continue;
		ret += dfs(there);
		child++;
	}
	if(child == 0) return 1;
	return ret;
}
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp == -1) root = i;
		else a[temp].push_back(i);
	}
	cin >> m;
	if(m == root) {
		cout << 0;
		return 0;
	}
	else cout << dfs(root);
	return 0;
}