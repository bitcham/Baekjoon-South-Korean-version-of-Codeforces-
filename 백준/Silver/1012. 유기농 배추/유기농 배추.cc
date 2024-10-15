#include<bits/stdc++.h>
using namespace std;
int n, m ,visited[54][54], ab, bc, t, k, ret;
int a[54][54];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
void DFS(int y, int x){
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		if (a[ny][nx] == 1 && !visited[ny][nx]){
			DFS(ny,nx);
		}
	}
	return;
}
int main(){
	cin >> t;
	while(t--){
		ret = 0;
		memset(a, 0, sizeof(a));
        memset(visited, 0, sizeof(visited));
		cin >> m >> n >> k;
		for(int i = 0; i < k; i++){
			cin >> ab >> bc;
			a[bc][ab] = 1;
		}
		for(int i = 0; i < n; i++){
			for( int j = 0; j < m; j++){
				if(a[i][j] == 1 && !visited[i][j]){
					ret++; DFS(i, j);
				}
			}
		}
		cout << ret<< '\n';
	}
	return 0;
}