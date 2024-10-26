#include<bits/stdc++.h>
using namespace std;
string s, ret;
int flag, a[200], mid;
int main(){
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		a[s[i]]++;
	}
	for(int i = 'Z'; i >= 'A'; i--){
		if(a[i] % 2){
			mid = i;
			flag++;
			a[i]--;
		}
		if(flag >= 2){
			break;
		}

		for(int j = 0; j < a[i]; j += 2){
			ret = char(i) + ret;
			ret += char(i);
		}
	}
	if(mid) ret.insert(ret.size()/2, 1, char(mid));
	if(flag >= 2) cout << "I'm Sorry Hansoo" << "\n";
	else cout << ret;
	return 0;
}