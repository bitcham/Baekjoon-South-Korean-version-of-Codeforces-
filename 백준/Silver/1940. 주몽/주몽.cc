#include<bits/stdc++.h>
using namespace std;
int n, m, sum, cnt;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	cin >> n >> m;
	int N[n];
	
	for(int i = 0; i < n; i++){
		cin >> N[i];
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			sum = N[i] + N[j];
			if(sum == m){
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}