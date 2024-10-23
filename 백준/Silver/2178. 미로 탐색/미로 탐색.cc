#include<bits/stdc++.h>
using namespace std;
int n, m, a[101][101], visited[101][101], y ,x;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, -1, 0, 1};
string s;
int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%1d", &a[i][j]);
		}
	}
	queue<pair<int, int>> q;
	visited[0][0] = 1;
	q.push({0, 0});
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0|| nx < 0 || ny >= n || nx >= m) continue;
			if(visited[ny][nx] != 0 || a[ny][nx] == 0) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
		}
	}
	printf("%d", visited[n - 1][m - 1]);
	return 0;
}