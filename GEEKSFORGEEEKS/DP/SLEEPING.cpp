#include <bits/stdc++.h>
using namespace std;

bool ok(int x, int l, int r){
	return (x>= l && x <= r);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, h ,l, r;
	cin >> n >> h >> l >> r;
	vector<int> v(n);
	for(auto &x: v){
		cin >> x;
	}
	vector<vector<int>> dp(n+1, vector<int>(n+1, INT_MIN));
	dp[0][0] = 0;
	int sum = 0;

	for(int i = 0; i < n; i++){
		sum += v[i];
		for(int j = 0; j <= n; j++){
			
			dp[i+1][j] = max(dp[i+1][j], dp[i][j] + ok((sum-j)%h, l, r));
			if(j < n){
				dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + ok((sum - j - 1)%h, l, r));
			}	
		}
	}
	cout << *max_element(dp[n].begin(), dp[n].end());
	

	return 0;
}