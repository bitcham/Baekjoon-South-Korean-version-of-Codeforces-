#include<bits/stdc++.h>
using namespace std;
int n, m, ret, visited[51][51];
char a[51][51];
int dy[] = {-1, 0, 1, 0}, dx[] = {0, -1, 0, 1};
int bfs(int y, int x){
	visited[y][x] = 1;
	int mx = 0;
	queue<pair<int, int>> q;
	q.push({y, x});
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >= m)continue;
			if(visited[ny][nx] || a[ny][nx] != 'L')continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
			mx = max(mx, visited[ny][nx]);
		}
	}
	return mx - 1;
}
int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < m; j++){
			memset(visited, 0, sizeof(visited));
			if(visited[i][j] == 0 && a[i][j] == 'L'){
				ret = max(ret, bfs(i, j));
			}
		}
	}
	cout << ret;
	return 0;
}