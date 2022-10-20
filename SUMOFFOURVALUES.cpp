#include <bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	

	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	for(auto &y : v){
		cin >> y;
	}
	unordered_map<int, pair<int, int>> mp;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			mp[v[i]+v[j]] = {i, j};
		}
	}

	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			int s = v[i] + v[j];
			pair<int ,int> p = mp[x-s];
			if(mp.find(x-s) != mp.end()){
				if(p.first != i && p.second != i && p.first != j && p.second != j){
					cout << i+1 << " " << j+1 << " " << p.first+1 << " " << p.second+1;
					return 0;
				}

			}
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}