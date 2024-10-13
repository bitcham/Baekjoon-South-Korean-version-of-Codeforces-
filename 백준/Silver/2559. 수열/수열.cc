#include<bits/stdc++.h>
using namespace std;
int N, K, sum;
int main(){
	cin >> N >> K;
	int n[N];
	for(int i = 0; i < N; i++){
		cin >> n[i];
	}
	for(int j = 0; j < K; j++){
		sum += n[j];
	}
	for (int i = 1; i < N - K + 1; i++){
		int temp = n[i];
		for(int j = i+1; j < i+K; j++){
			temp += n[j];
		}
		if (temp > sum){
			sum = temp;
		}
	}
	cout << sum;
	return 0;
}