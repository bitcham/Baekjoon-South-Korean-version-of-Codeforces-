#include<bits/stdc++.h>
using namespace std;
int n, m, cnt, a, b;
int main(){
	cin >> n;
	string s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
		m += s[i].size();
	}
	if(m > 1000000) exit(0);
	
	for(int i = 0; i < n; i++){
		stack<char> stk;
		for(char c : s[i]){
			if(!stk.empty() && stk.top() == c){
				stk.pop();
			}else{
				stk.push(c);
			}	
		}
		if(stk.empty()) cnt++;
	}
	cout << cnt;
	return 0;
} 