#include<bits/stdc++.h>
using namespace std;
int n, m, a[4][4], ret;
int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%1d", &a[i][j]);
		}
	}
	for(int s = 0; s < (1 << n * m); s++){
		int sum = 0;
		for(int i = 0; i < n; i++){
			int cur = 0;
			for(int j = 0; j < m; j++){
				int k = i * m + j;
				if((s & (1 << k)) == 0){
					cur = cur * 10 + a[i][j];
				} else{
					sum += cur;
					cur = 0;
				}
			}
			sum += cur;
		}
		
		for(int i = 0; i < m; i++){
			int cur = 0;
			for(int j = 0; j < n; j++){
				int k = j * m + i;
				if((s & (1<<k)) != 0){
					cur = cur * 10 + a[j][i];
				} else{
					sum += cur;
					cur = 0;
				}
			}
			sum += cur;
		}
		ret = max(ret, sum);
	}
	cout << ret;	
	return 0;
}