#include<bits/stdc++.h>
using namespace std;
int n;
string s;
bool checkParen(string s){
	stack<char> a;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') a.push(s[i]);
		else if(s[i] == ')'){
			if(a.empty()) return false;
			if(a.top() == '(') a.pop();
			else{
				return false;
			}
		}
	}
	return a.empty();
}
int main(){
	cin >> n;
	while(n--){
		cin >> s;
		cout << (checkParen(s) ? "YES" : "NO") << "\n";
	}
	return 0;
}