#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m, k;
ll go(ll n, ll m){
	if(m == 1) return n % k;
	ll ret = go(n, m/2);
	ret = (ret * ret) % k;
	if(m % 2) ret = (ret * n) % k;
	return ret;
}
int main(){
	cin >> n >> m >> k;
	cout << go(n, m) << "\n";
	return 0;
}