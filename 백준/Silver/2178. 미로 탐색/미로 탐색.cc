#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, -1, 0, 1};
int n, m, a[max_n][max_n], visited[max_n][max_n], x, y;
string b;
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> b;
		for(int j = 1; j <= m; j++){
			a[i][j] = b[j-1] - '0';
		}
	}
	queue<pair<int, int>> q;
	visited[1][1] = 1;
	q.push({1, 1});
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 1 || ny > n || nx < 1|| nx > m || a[ny][nx] == 0) continue;
			if (visited[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx}); 
		}
	}
	cout << visited[n][m];
	return 0;
}