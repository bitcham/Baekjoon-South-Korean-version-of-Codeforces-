#include<bits/stdc++.h>
using namespace std;
vector<int> _num;
vector<char> _oper;
string s;
int n, ret = -987654321;
int oper(char a, int b, int c){
	if(a == '+') return b + c;
	if(a == '-') return b - c;
	if(a == '*') return b * c;
}
void go(int here, int num){
	if(here == _num.size() - 1){
		ret = max(ret, num);
		return;
	}
	
	go(here + 1, oper(_oper[here], num, _num[here + 1]));
	if(here + 2 <= _num.size() - 1){
		int temp = oper(_oper[here + 1], _num[here + 1], _num[here + 2]);
		go(here + 2, oper(_oper[here], num, temp));
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL); 
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		if(i % 2 == 0) _num.push_back(s[i] - '0');
		else _oper.push_back(s[i]);
	}
	go(0, _num[0]);
	cout << ret << "\n";
	return 0;
}