#include<bits/stdc++.h>
using namespace std;

int n = 9, k = 7, sum=0;
vector<int> a;

void print(vector<int> b){
	for(int i : b) cout << i << " ";
	cout << "\n";
}

void combi(int start, vector<int> &b){
	if (b.size() == k){
		for (int j = 0; j < k; j++){
			sum += b[j];
		}
		if (sum == 100){
			print(b);
			exit(0);
		}
		sum = 0;
		return;
	}
	for(int i = start + 1; i < n; i++){
		b.push_back(a[i]);
		combi(i, b);
		b.pop_back();
	}
	return;
}


int main(){
	for (int i = 0; i < n; i++){
		int j = 0;
		cin >> j;
		if( j>=1 && j <= 100)
			a.push_back(j);
	}
	sort(a.begin(), a.end());
	vector<int> b;
	combi(-1, b);
	
	return 0;
}