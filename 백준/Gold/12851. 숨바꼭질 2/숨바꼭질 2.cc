#include<bits/stdc++.h>
using namespace std;
const int MAX = 100000;
int cnt[MAX + 1], visited[MAX + 1], n, m;
int main(){
	cin >> n >> m;
	if(n == m){
		puts("0"); puts("1");
		return 0;
	}
	queue<int> q;
	visited[n] = 1;
	q.push(n);
	cnt[n]++;
	while(q.size()){
		int x = q.front(); q.pop();
		for(int num : {x + 1, x - 1, x * 2}){
			if(num >= 0 && num <= MAX){
				if(!visited[num]){
					cnt[num] += cnt[x];
					visited[num] = visited[x] + 1;
					q.push(num);
				}else if(visited[num] == visited[x] + 1){
					cnt[num] += cnt[x];
				}
			}
		}
	}
	cout << visited[m] - 1 << "\n" << cnt[m];
	return 0;
}