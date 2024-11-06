#include<bits/stdc++.h>
using namespace std;
const int MAX = 500000;
int n, k, turn = 1, visited[2][MAX + 4], ok;
int main(){
	cin >> n >> k;
	if(n == k){
		cout << 0;
		return 0;
	}
	queue<int> q;
	q.push(n);
	visited[0][n] = 1;
	while(q.size()){
		k += turn;
		if(k > MAX){
			break;
		}
		if(visited[turn % 2][k]) {
			ok = 1;
			break;
		}
		int qSize = q.size();
		while(qSize--){
			int x = q.front(); q.pop();
			for(int nx : {x + 1, x - 1, x * 2}){
				if(nx < 0 || nx > MAX) continue;
				if(visited[turn % 2][nx]) continue;
				visited[turn % 2][nx] = visited[(turn + 1) % 2][x] + 1;
				if(nx == k){
					ok = 1; break;
				}
				q.push(nx);
			}
			if(ok) break;
		}
		if(ok) break;
		turn++;
	}
	if(ok) cout << turn;
	else cout << -1;
	
	return 0;
}