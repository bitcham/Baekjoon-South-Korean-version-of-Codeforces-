#include<bits/stdc++.h>
using namespace std;
int cnt1, flag;
int cnt2[26];
string str[160];

int main(){
	cin >> cnt1;
	for (int i = 0; i < cnt1; i++){
		cin >> str[i];
	}
	for (int i = 0; i < cnt1; i++){
		cnt2[str[i][0] - 'a']++;
	}
	for (int i = 0; i < 26; i++){
		if(cnt2[i] >= 5){
			cout << char(i + 'a');
			flag = 1;
		}
	}
	if(!(flag == 1)){
		cout << "PREDAJA" << '\n';
	}
	
	return 0;
}
