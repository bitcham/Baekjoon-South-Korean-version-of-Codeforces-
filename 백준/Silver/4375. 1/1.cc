#include<bits/stdc++.h>
using namespace std;
int cnt, n, temp;
int main(){
	while(scanf("%d", &n) != EOF){
		cnt = 1;
		temp = 1;
		while(temp % n){
			cnt++;
			temp = temp * 10 + 1;
			temp %= n;
		}
		printf("%d\n", cnt);
	}
	return 0;
}