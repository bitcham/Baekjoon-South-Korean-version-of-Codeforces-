#include <bits/stdc++.h>
using namespace std;
int n, m, j, temp, l, r, ret;
int main(){
	cin >> n >> m >> j;
	l = 1;
	for(int i = 0; i < j; i++){
		r = l + m - 1;
		cin >> temp;
		if(temp >= l && temp <= r) continue;
		else{
			if(temp < l){
				ret += (l - temp);
				l = temp;
			}
			else if(temp > r){
				ret += (temp - r);
				l += (temp - r);
			}
		}
	}
	cout << ret;
	return 0;
}