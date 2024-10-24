#include<bits/stdc++.h>
using namespace std;
int n;
string s;
bool check(){
	stack<char> v;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') v.push(s[i]);
		else{
			if(v.empty()) return false;
			v.pop();
		}
	}
	return v.empty();
}
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(check()) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
	
	return 0;
}