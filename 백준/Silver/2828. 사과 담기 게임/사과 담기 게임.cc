#include<bits/stdc++.h>
using namespace std;
int n, m, j, k, cnt, v, w;
int main(){
	cin >> n >> m;
	cin >> j;
	v = 1;
	while(j--){
		cin >> k;
		w = v + m - 1;
		if(k >= v && k <= w) {
			continue;
		}else if(k < v) {
			cnt += v - k; v = k;
		}else {
			cnt += k - w; v += (k - w);
		}
	}
	cout << cnt;
	return 0;
}