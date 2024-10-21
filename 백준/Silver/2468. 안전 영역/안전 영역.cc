#include<bits/stdc++.h>
using namespace std;
int ret = 1, cnt, n, a[104][104], visited[104][104];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
void dfs(int y, int x, int h){
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if(visited[ny][nx] || a[ny][nx] <= h) continue;
		dfs(ny, nx, h);
	}
	return;
}
int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(int d = 1; d <= 100; d++){
		fill(&visited[0][0], &visited[0][0] + 104* 104, 0);
		cnt = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(visited[i][j] == 0 && a[i][j] > d){
					dfs(i, j, d);
					cnt++;
				}
			}
		}
		ret = max(ret, cnt);
	}
	cout << ret;

	return 0;
}