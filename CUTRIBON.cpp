#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, a, b, c, x, y, z;
	cin >> n >> a >> b >> c;
	int dp[n+1];
	dp[0] = 0;
	x = INT_MIN, y = INT_MIN, z = INT_MIN;
	
	for(int i = 1; i <= n; i++){

		if(i >= a){
			x = dp[i-a];
		}
		if(i >= b){
			y = dp[i-b];
		}
		if(i >= c){
			z = dp[i-c];
		}
		dp[i] = 1 + max(x, max(y,z));
	}
	cout << dp[n];

	return 0;


}