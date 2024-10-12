#include<bits/stdc++.h>
using namespace std;
string str1, str2;
int main(){
	cin >> str1;
	str2 = str1;
	reverse(str2.begin(), str2.end());
	if (equal(str2.begin(), str2.end(), str1.begin())){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}