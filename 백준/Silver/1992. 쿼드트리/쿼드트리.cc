#include<bits/stdc++.h>
using namespace std;
int n;
string s[70];
string go(int y, int x, int size){
	if(size == 1) return string(1, s[y][x]);
	string ret = "";
	char b = s[y][x];
	for(int i = y; i < y+size; i++){
		for(int j = x; j < x+size; j++){
			if(s[i][j] != b){
				ret += '(';
				ret += go(y, x, size/2);
				ret += go(y, x + size /2, size /2);
				ret += go(y+size/2, x, size/2);
				ret += go(y+size/2, x+size/2, size/2);
				ret += ')';
				return ret;
			}
		}
	}
	return string(1, b);
	
}
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	cout << go(0, 0, n);
	return 0;
}