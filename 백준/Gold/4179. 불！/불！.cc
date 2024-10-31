#include<bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int n, m, person[1004][1004], fire[1004][1004], y, x, sy, sx, ret;
string s;
vector<pair<int, int>> v;
int dy[] = { -1, 0, 1, 0}, dx[] = { 0, 1, 0, -1};
char a[1004][1004];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
	cin >> n >> m;
	fill(&fire[0][0], &fire[0][0] + 1004 * 1004, INF);
	for(int i = 0; i < n; i++){
		cin >> s;
		for(int j = 0; j < m; j++){
			a[i][j] = s[j];
			if(a[i][j] == 'F') v.push_back({i, j});
			if(a[i][j] == 'J'){
				sy = i; sx = j;
			}
		}
	}
	queue<pair<int, int>> q;
	for(pair<int, int> it : v){
		q.push({it.first, it.second});
		fire[it.first][it.second] = 1;
	}
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny >= n || ny < 0 || nx < 0 || nx >= m) continue;
			if(fire[ny][nx] != INF || a[ny][nx] == '#') continue;
			fire[ny][nx] = fire[y][x] + 1;
			q.push({ny, nx});
		}
	}
	q.push({sy, sx});
	person[sy][sx] = 1;
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		if(y == 0 || y == n - 1 || x == 0 || x == m -1){
			ret = person[y][x];
			break;
		}
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny >= n || ny < 0 || nx < 0 || nx >= m) continue;
			if(person[ny][nx] || a[ny][nx] == '#') continue;
			if(fire[ny][nx] <= person[y][x] + 1) continue;
			person[ny][nx] = person[y][x] + 1;
			q.push({ny, nx});
			
		}	
	}
	if(ret) cout << ret;
	else cout << "IMPOSSIBLE";
	return 0;
}