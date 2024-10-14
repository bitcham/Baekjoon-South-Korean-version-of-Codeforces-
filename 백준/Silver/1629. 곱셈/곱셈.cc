#include<bits/stdc++.h>
using namespace std;
long long a, b, c, ret;
long long go(long long a, long long b){
	if(b == 1) return a % c;
	ret = go(a, b/2);
	ret = (ret * ret) % c;
	if(b & 1) ret = (ret * a) % c;
	return ret;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> a >> b >> c;
	if(a > INT_MAX || b > INT_MAX || c > INT_MAX) exit(0);
	cout << go(a,b) << "\n";
	return 0;
}