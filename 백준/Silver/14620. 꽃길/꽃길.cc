#include<bits/stdc++.h>
using namespace std;
int n, p[11][11], v[11][11], ret = 987654321;
int dy[] = {-1, 0, 1, 0}, dx[] = {0, -1, 0, 1};

void goErase(int y, int x){
	v[y][x] = 0;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
        int nx = x + dx[i];
        v[ny][nx] = 0;
	}
	return;
}
bool check(int y, int x){
	if(v[y][x]) return 0;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny<0 || ny>=n || nx < 0 || nx >= n || v[ny][nx]) {
            return 0;
        }
	}
	return 1;
}
int setFlower(int y, int x){
	v[y][x] = 1;
	int s = p[y][x];
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
        int nx = x + dx[i];
        v[ny][nx] = 1;
        s += p[ny][nx];
	}
	return s;
}
void go(int cnt, int money){
	if(cnt == 3) {
		ret = min(ret, money);return;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(check(i, j)){
				go(cnt + 1, money + setFlower(i, j));
				goErase(i, j);
			}
		}
	}
}
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> p[i][j];
		}
	}
	go(0, 0);
	cout << ret;
	return 0;
}