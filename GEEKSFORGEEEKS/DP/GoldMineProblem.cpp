#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i  < b; i++)
const int N = 1010;
int a[N][N], dp[N][N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, m;
	cin >> n >> m;
	

	rep(i, 0, n){
		rep(j, 0, m){
			cin >> a[i][j];
		}
	}
	// base
	rep(i, 0, n){
		dp[i][0] = a[i][0];


	}
	// 
	// 01 11 21 
	rep(j, 1, m){
		rep(i, 0, n){
			if(i == 0){
				dp[i][j] = max(dp[i+1][j-1], dp[i][j-1]) + a[i][j];
			}else if(i == n-1){
				dp[i][j] = max(dp[i][j-1],dp[i-1][j-1]) + a[i][j];
			}else{
				
				dp[i][j] = max(dp[i][j-1], max(dp[i+1][j-1], dp[i-1][j-1]))+ a[i][j];
			}
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	int maxx = -1;
	rep(i, 0, n){
		maxx = max(dp[i][m-1], maxx);
	}
	cout << maxx;


	return 0;
}