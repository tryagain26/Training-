#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N], b[N];
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, x;
	cin >> n >> x;
	vector<pair<int, int>> vp;
	for(int i = 0; i < n; i++){
		cin >>a[i] >> b[i];
	}
	bool dp[n+1][x+101] = {false};
	dp[0][0] = true;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < x+1; j++){
			if(dp[i][j]){
				dp[i+1][j + a[i]] = true;
				dp[i+1][j + b[i]]  = true;
			}else{
				continue;
			}
		}
	}
	if(dp[n][x]){
		cout << "Yes";
	}else{

		cout << "No";
	}

	return 0;
}