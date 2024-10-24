#include<bits/stdc++.h>
using namespace std;
int n, a;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	while(n--){
		cin >> a;
		int ret2 = 0, ret5 = 0;
		for(int i = 2; i <= a; i *= 2){
			ret2 += a / i;  
		}
		for(int i = 5; i <= a; i *= 5){
			ret5 += a/i;
		}
		cout << ret5 << "\n";
	}
	return 0;
}