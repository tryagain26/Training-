#include <bits/stdc++.h>
using namespace std;




const int N = 110;
int dp[N][N] = {INT_MIN}, A[N], B[N];


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		int n;
		for(int i = 1; i <= n; i++){
			cin >> A[i];
		}
		int m;
		cin >> m;
		for(int i = 1; i <= m; i++){
			cin >> B[i];
		}
		dp[0][0] = 0;
		for(int i = 1 ; i <= n; i++){
			for(int j = 1; j <= m; j++){
				
			}
		}
	}
}