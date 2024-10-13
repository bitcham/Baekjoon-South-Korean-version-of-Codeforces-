#include<bits/stdc++.h>
using namespace std;
string str1, str2;
int main(){
	getline(cin, str1);
	str2 = str1;
	for (int i = 0; i < str1.length(); i++){
		if(str1[i] >= 'a' && str1[i] <= 'z'){
			if (str1[i] + 13 > 'z'){
				str2[i] = str1[i] + 13 - 26;
			}else{
				str2[i] = str1[i] + 13;
			}
		}
		else if(str1[i] >= 'A' && str1[i] <= 'Z'){
			if (str1[i] + 13 > 'Z'){
				str2[i] = str1[i] + 13 - 26;
			}else{
				str2[i] = str1[i] + 13;
			}
		}	
		
		else{
			str2[i] = str1[i];
		}
	}
	
	cout << str2;
	
	return 0;
}