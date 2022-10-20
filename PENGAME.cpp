#include <bits/stdc++.h>
using namespace std;

const int N = 10010;
const int M = 1000000007;
int dp[N][N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, l,r, k;
	cin >> n >> k >> l >> r;
	
	cout << dp[k][r-l];

	return 0;
}