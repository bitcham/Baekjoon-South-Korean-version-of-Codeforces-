#include<bits/stdc++.h>
using namespace std;
int n, point, flag = 1;
string comp;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin >> n;
	cin >> comp;
	
	
	point = comp.find('*');
	
	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		
		if(str.length() < comp.length() - 1){
			flag = 0;
		}
		
		if (flag == 1){
			for(int j = 0; j < point; j++){
				if(str[j] != comp[j]){
					flag = 0;
					break;
				}
			}
		}
		
		if (flag == 1){
			for(int j = comp.length() - 1, k = str.length() - 1; j > point; j--, k--){
				if(k < 0 || str[k] != comp[j]){
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1) cout << "DA" << "\n";
		else cout << "NE" << "\n";
		flag = 1;
	}
	
	
	return 0;
}