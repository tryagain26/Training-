#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
bool visit[N];
vector<int> g[N];
int cnt = 0;
void bfs(int s){
	cnt++;
	queue<int> q;
	q.push(s);
	visit[s] = true;

	while(!q.empty()){
		
		int u = q.front();
		q.pop();
		for(auto v: g[u]){
			if(!visit[v]){
				visit[v] = true;
				q.push(v);
			}
		}
	}

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	memset(visit, false, sizeof(visit));
	while(m--){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	cnt = 0;
	for(int i = 1; i <= n; i++){
		if(!visit[i]){
			bfs(i);

		}
	}
	
	if(cnt == 1){
		cout << "YES";
	
	}else{
		cout << "NO";
	}
	return 0;
}