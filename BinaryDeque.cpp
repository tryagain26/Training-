#include<bits/stdc++.h>
using namespace std;

const int N = 100010;
int A[N];
int query(int l, int r, vector<int>& pre){
	return pre[r] - (l ? pre[l-1] : 0);
}

void solve(){

	int n,x;
	cin >> n >> x;
	vector<int> v(n), pre(n);
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	pre[0] = v[0];
	for(int i = 1; i < n; i++){
		pre[i] += pre[i-1] + v[i];
	}
	int ans = INT_MAX;
	for(int i = 0; i < n; i++){
		int l = i, r = n-1, pos = -1;
		while(l <= r){
			int mid = (l+r)/2;
			if(query(i, mid, pre) <= x){
				pos = mid;
				l = mid+1;
			}else{
				r = mid-1;
			}
		}
		if(pos == -1 || query(i, pos, pre) != x){
			continue;
		}
		ans = min(ans, n - (pos-i+1));
		
	}
	cout << (ans == INT_MAX ? -1 : ans) << "\n";

}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		solve();

	}
	return 0;

}