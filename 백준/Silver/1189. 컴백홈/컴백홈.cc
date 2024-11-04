#include<bits/stdc++.h>
using namespace std;
int r, c, k, visited[6][6], ret;
int dy[] = { -1, 0, 1, 0}, dx[] = {0, -1, 0, 1};
char a[6][6];
string s;
void dfs(int y, int x){
	if(y == 0 && x == c-1 && visited[y][x] == k){
		ret++;
		return;
	}
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= r || nx >= c) continue;
		if(visited[ny][nx] || a[ny][nx] == 'T') continue;
		visited[ny][nx] = visited[y][x] + 1;
		dfs(ny, nx);
		visited[ny][nx] = 0;
	}
	return;
}
int main(){
	cin >> r >> c >> k;
	for(int i = 0; i < r; i++){
		cin >> s;
		for(int j = 0; j < c; j++){
			a[i][j] = s[j];
		}
	}
	visited[r-1][0] = 1;
	dfs(r-1, 0);
	cout << ret;
	return 0;
}