#include<bits/stdc++.h>
using namespace std;
int n, cnt = 0;
int main(){
	cin >> n;
	if(n == 64) {
		cout << 1;
		return 0;
	}
	while(n > 1){
		if(n % 2)cnt++;
		n /= 2;	
	}
	if(n == 1) cnt++;
	cout << cnt;
	return 0;
}