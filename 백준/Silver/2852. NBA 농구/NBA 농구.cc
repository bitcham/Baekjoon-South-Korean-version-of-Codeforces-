#include<bits/stdc++.h>
using namespace std;
#define prev aaaa
int n, o, asum, bsum, A, B;
string s, prev;
string print(int a){
	string b = "00" + to_string(a / 60);
	string c = "00" + to_string(a % 60);
	return b.substr(b.size() - 2, 2) + ":" + c.substr(c.size() - 2, 2);
}
int change(string a){
	return atoi(a.substr(0, 2).c_str()) * 60 + atoi(a.substr(3, 2).c_str());
}
void go(int& sum, string a){
	sum += change(a) - change(prev);
}
int main(){
	cin >> n;
	prev = "";
	while(n--){
		cin >> o;
		cin >> s;
		if(A > B) go(asum, s);
		else if(B > A) go(bsum, s);
		if(o==1) A++;
		else B++;
		prev = s;
	}
	if(A > B) go(asum, "48:00");
	else if(B > A) go(bsum, "48:00");
	cout << print(asum) << "\n";
	cout << print(bsum) << "\n";
	return 0;
}