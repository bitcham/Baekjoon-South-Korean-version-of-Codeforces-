#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int n, a[max_n][max_n], visited[max_n][max_n], ret, max_height;
int dy[] ={-1,0,1,0};
int dx[] ={0,1,0,-1};
void DFS(int y, int x, int height){
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= n || nx < 0 || nx >= n || a[ny][nx] <= height) continue;
		if(visited[ny][nx] == 1) continue;
		DFS(ny,nx, height);
	}
}
int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
			if(max_height < a[i][j]){
				max_height = a[i][j];
			}
		}
	}
	for (int l = 0; l < max_height; l++){
		fill(&visited[0][0], &visited[n][n], 0);
		int temp = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if(a[i][j] > l && !visited[i][j]){
					temp++; DFS(i,j, l);
				}
			}	
		}
		if (temp > ret) ret = temp;
	}
	cout << ret;
	return 0;
}