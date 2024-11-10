#include<bits/stdc++.h>
using namespace std;
int n, l, a[101][101], b[101][101];
int solve(int c[101][101]){
	int ret = 0;
	for(int i = 0; i < n; i++){
		int cnt = 1;
		int j;
		for(j = 0; j < n - 1; j++){
			if(c[i][j] == c[i][j+1]) cnt++;
			else if(c[i][j] + 1 == c[i][j + 1] && cnt >= l) cnt = 1;
			else if(c[i][j] - 1 == c[i][j + 1] && cnt >= 0){
				cnt = -l + 1;
			}
			else {
				break;
			}
		}
		if(j == n - 1 && cnt >= 0) ret++;
	}
	return ret;
}
int main(){
	cin >> n >> l;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			b[j][i] = a[i][j];
		}
	}
	cout << solve(a) + solve(b);
	return 0;
}