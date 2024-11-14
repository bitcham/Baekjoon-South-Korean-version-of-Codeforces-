#include<bits/stdc++.h>
using namespace std;
int n, a[11], visited[11], comp[11], temp1, temp2, ret = 987654321;
vector<int> adj[11];
pair<int, int> dfs(int here, int value){
	visited[here] = 1;
	pair<int, int> ret = {1, a[here]};
	for(int there : adj[here]){
		if(comp[there] != value) continue;
		if(visited[there]) continue;
		pair<int, int> _temp = dfs(there, value);
		ret.first += _temp.first;
		ret.second += _temp.second;		
	}
	return ret;
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		cin >> temp1;
		for(int j = 0; j < temp1; j++){
			cin >> temp2;
			adj[i].push_back(temp2);
			adj[temp2].push_back(i);
		}

	}
	for(int i = 1; i < (1 << n) - 1; i++){
		fill(visited, visited + 11, 0);
		fill(comp, comp + 11, 0);
		int idx1 = -1, idx2 = -1;
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
				idx1 = j + 1; comp[j + 1] = 1;
			}else idx2 = j + 1;
		}
		pair<int, int> comp1 = dfs(idx1, 1);
		pair<int, int> comp2 = dfs(idx2, 0);
		if(comp1.first + comp2.first == n){
			ret = min(ret, abs(comp2.second - comp1.second));
		}
	}
	cout << ((ret == 987654321) ? -1 : ret);
	return 0;
}