#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, q;
	cin >> n >> q;
	vector<vector<int>> vv;

	rep(i, 0 , n){
		int x;
		cin >> x;
		vector<int> v(x);
		rep(j, 0, x){
			cin >> v[j];
			
		}

		vv.push_back(v);
	}
	rep(i, 0, q){
		int l, r;
		cin >> l >> r;
		cout << vv[l-1][r-1] << "\n";
	}
	return 0;
}