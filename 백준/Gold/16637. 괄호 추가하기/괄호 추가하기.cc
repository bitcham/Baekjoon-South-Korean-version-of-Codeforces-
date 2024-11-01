#include<bits/stdc++.h>
using namespace std;
int ret = -987654321;
int n;
char s[20];
vector<int> num;
vector<char> _oper;
int oper(char a, int b, int c){
	if(a == '+') return b + c;
	if(a == '-') return b - c;
	if(a == '*') return b * c;
}
void solve(int here, int _num){
	if(here == num.size() - 1){
		ret = max(ret, _num); return;
	}
	solve(here + 1, oper(_oper[here], _num, num[here + 1]));
	if(here + 2 <= num.size() -1){
		int temp = oper(_oper[here + 1], num[here + 1], num[here + 2]);
		solve(here + 2, oper(_oper[here], _num, temp));
	}
	return;
}
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
		if(s[i] == '+' || s[i] == '-' || s[i] == '*') _oper.push_back(s[i]);
		else num.push_back(s[i] - '0');
	}
	solve(0, num[0]);
	cout << ret;
	return 0;
}