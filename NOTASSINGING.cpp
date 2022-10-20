#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		int n, u, v;
		cin >> n;
		
		map<int, int> mc;
		for(int i =0; i < n ;i++){
			cin >> u >> v;
			mc[u]++, mc[v]++;
		}
		
	}
}