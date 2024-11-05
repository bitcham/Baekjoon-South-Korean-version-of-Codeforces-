#include<bits/stdc++.h>
using namespace std;
int r, c, ret = -987654321, cnt[30], visited[21][21];
char a[21][21];
string s;
int dy[] = { -1, 0, 1, 0}, dx[] = { 0, -1, 0, 1};
void solve(int y, int x){
	ret = max(ret, visited[y][x]);
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
		if(visited[ny][nx]) continue;
		if(cnt[a[ny][nx] - 'A']) continue;
		cnt[a[ny][nx] - 'A']++;
		visited[ny][nx] = visited[y][x] + 1;
		solve(ny, nx);
		cnt[a[ny][nx] - 'A'] = 0;
		visited[ny][nx] = 0;
	}
	return;
}
int main(){
	cin >> r >> c;
	for(int i = 0; i < r; i++){
		cin >> s;
		for(int j = 0; j < c; j++){
			a[i][j] = s[j];
		}
	}
	visited[0][0] = 1;
	cnt[a[0][0] - 'A'] = 1;
	solve(0, 0);
	cout << ret;
	return 0;
}