#include<bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int r, c, personCheck[1001][1001], fireCheck[1001][1001], sy, sx, y, x, ret;
char a[1001][1001];
int dy[] = {-1, 0, 1, 0}, dx[] = {0, -1, 0, 1};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
	queue<pair<int, int>> q;
	cin >> r >> c;
	fill(&fireCheck[0][0], &fireCheck[0][0] + 1001 * 1001, INF);
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> a[i][j];
			if(a[i][j] == 'F') {
				fireCheck[i][j] = 1;
				q.push({i, j});
			}
			if(a[i][j] == 'J'){
				sy = i; sx = j;
			}
		}
	}
	
	while(q.size()){
		tie(y,x) = q.front();q.pop();
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
			if(fireCheck[ny][nx] != INF || a[ny][nx] == '#') continue;
			fireCheck[ny][nx] = fireCheck[y][x] + 1;
			q.push({ny, nx});
		}
	}
	q.push({sy, sx});
	personCheck[sy][sx] = 1;
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		if(y == 0 || x == 0 || y == r -1 || x == c -1){
			ret = personCheck[y][x];
			break;
		}
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
			if(fireCheck[ny][nx] <= personCheck[y][x] + 1) continue;
			if(personCheck[ny][nx] != 0 || a[ny][nx] == '#') continue;
			personCheck[ny][nx] = personCheck[y][x] + 1;
			q.push({ny, nx});
		}
	}
	if(ret != 0) cout << ret;
	else cout << "IMPOSSIBLE";
	return 0;
}