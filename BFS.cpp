#include <bits/stdc++.h>
using namespace std;
const int MaxN = 1010;
int n;
int d[MaxN], par[MaxN];
bool visit[MaxN]; 
vector<int> g[MaxN];
void bfs(int s){
	fill_n(d, n+1, 0);
	fill_n(par, n+1, -1);
	fill_n(visit, n+1, false);
	queue<int> q;
	q.push(s);
	visit[s] = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto v: g[u]){
			d[v] = d[u]+1;
			par[v] = u;
			visit[v] = true;
			q.push(v);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	return 0;
}