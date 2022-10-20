#include <bits/stdc++.h>
using namespace std;

#define ll = long long;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll n, X;
	cin >> n >> X;
	vector<ll> v(n);
	for(auto &x: v){
		cin >> x;
	}
	map<ll, pair<ll, ll>> mp;
	for(int i = 0; i < int(v.size())-1; i++){
		for(int j = i+1; j < int(v.size()); j++){
			mp[v[i] + v[j]] = {i, j};
		}
	}
	for(int i = 0; i < int(v.size()); i++){
		if(mp.count(X-v[i])){
			pair<int ,int> p = mp[X-v[i]];
			if(i != p.first && i != p.second){
				cout << i+ 1 << " " << p.first + 1 <<  " " << p.second +1;
				return 0;
			}
		}
	}

	cout << "IMPOSSIBLE";
	return 0;
}