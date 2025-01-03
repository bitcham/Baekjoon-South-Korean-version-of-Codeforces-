#include<bits/stdc++.h>
using namespace std;
int n, a[1000004], ret[1000004];
stack<int> stk;
int main(){
	cin >> n;
	fill(&ret[0], &ret[0] + 1000004, -1);
	for(int i=0; i < n; i++){
		cin >> a[i];
		while(stk.size() && a[stk.top()] < a[i]){
			ret[stk.top()] = a[i]; stk.pop();
		}
		stk.push(i);
	}
	for(int i = 0; i < n; i++) cout << ret[i] << " ";
	return 0;
}