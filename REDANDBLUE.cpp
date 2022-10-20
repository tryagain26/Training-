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
		int n, m;
		cin >> n;
		vector<int> r(n);
		for(auto &x: r){
			cin >> x;
		}
		cin >> m;
		vector<int> b(m);
		for(auto &x : b){
			cin >> x;
		}
		partial_sum(r.begin(), r.end(), r.begin());
		partial_sum(b.begin(), b.end(), b.begin());

		int one = max(0, *max_element(r.begin(), r.end()));
		int two = max(0, *max_element(b.begin(), b.end()));
		cout << one + two << "\n";
	
	}
	return 0;
}