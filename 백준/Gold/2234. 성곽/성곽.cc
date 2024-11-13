#include<bits/stdc++.h>
using namespace std;
int c, r, a[51][51], visited[51][51], cnt, ret, ret_m[2504], maxN;
const int dy[] = {0, -1, 0, 1}, dx[] = {-1, 0, 1, 0};
int dfs(int y, int x, int value){
	visited[y][x] = value;
	int ret = 1;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= r || nx < 0 || nx >= c)continue;
		if(visited[ny][nx])continue;
		if(a[y][x] & (1 << i)) continue;
		ret += dfs(ny, nx, value);
	}
	return ret;
}
int main(){
	cin >> c >> r;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(!visited[i][j]){
				cnt++;
				ret_m[cnt] = dfs(i, j, cnt);
				ret = max(ret, ret_m[cnt]);
			}
		}
	}
	
	for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i + 1 < r){
                int a = visited[i + 1][j]; 
                int b = visited[i][j]; 
                if(a != b){ 
                    maxN = max(maxN, ret_m[a] + ret_m[b]); 
                }
            }
            if(j + 1 < c){
                int a = visited[i][j + 1]; 
                int b = visited[i][j]; 
                if(a != b){ 
                    maxN = max(maxN, ret_m[a] + ret_m[b]);  
                }
            } 
        } 
    }
    cout << cnt << "\n" << ret << "\n";
	cout << maxN;
	return 0;
}