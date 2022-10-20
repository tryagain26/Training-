#include<bits/stdc++.h>
using namespace std;

const int N = 1010, M = 1000000007;
int dp[N][N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, k;
	cin >> n >> k;
	for(int i = 0; i <= k; i++){
		for(int j = 0; j <= n; j++){
			if(i==0 || i == j){
				dp[i][j] = 1;
			}else if(i>j){
				dp[i][j] = 0;
			}else{
				dp[i][j] = (dp[i][j-1]%M + dp[i-1][j-1]%M);
				dp[i][j]%= M;
			}
		}
	}
	cout << dp[k][n];
	return 0;

}