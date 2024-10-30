#include<bits/stdc++.h>
using namespace std;
#define prev aaaa
const int MAX = 200004;
int visited[MAX + 1], prev[MAX + 1], n, m;
vector<int> v;
int main(){
	cin >> n >> m;
	if(n == m){
		cout << "0\n"; cout << n;
		return 0;
	}
	queue<int> q;
	visited[n] = 1;
	q.push(n);
	while(q.size()){
		int x = q.front(); q.pop();
		for(int num : {x + 1, x - 1, x * 2}){
			if(num >= 0 && num <= MAX){
				if(!visited[num]){
					prev[num] = x;
					visited[num] = visited[x] + 1;
					q.push(num);
				}
			}
		}
	}
	for(int i = m; i != n; i = prev[i]){
		v.push_back(i);
	}
	v.push_back(n);
	reverse(v.begin(), v.end());
	cout << visited[m] - 1 << "\n";
	for(int i : v){
		cout << i << " ";
	}
	return 0;
}