#include<bits/stdc++.h>
#define prev aaaa
using namespace std;
const int MAX = 500000;
int visited[2][MAX + 4], n, m, turn = 1, ok;
int main(){
	cin >> n >> m;
	if(n == m){
		cout << 0; return 0;
	}
	queue<int> q;
	visited[0][n] = 1;
	q.push(n);
	while(q.size()){
		m += turn;
		if(m > MAX) break;
		if(visited[turn %2][m]){
			ok =true;
			break;
		}
		int qSize = q.size();
		for(int i = 0; i < qSize; i++){
			int x = q.front(); q.pop();
			for(int num : {x + 1, x - 1, x * 2}){
				if(0 <= num && num <= MAX){
					if(visited[turn % 2][num]) continue;
					visited[turn % 2][num] = visited[(turn + 1) % 2][x] + 1;
					if(num == m){
						ok = 1; break;
					}
					q.push(num);
				}
			}
			if(ok)break;
		}
		if(ok)break;
		turn++;
	}
	if(ok) cout << turn;
	else cout << -1;
	return 0;
}