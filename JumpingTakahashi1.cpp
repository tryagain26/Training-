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
	for(int i = 0; i < n; i++){
		cin >>a[i] >> b[i];
	}
	bool dp[n+1][x+101] = {false};
	dp[n][x] = true;
	int j = n;
	for(int i = 0; i < n, j >= 1; i++, j--){
		
		dp[j-1][x-a[i]] = true;
		dp[j-1][x-b[i]] = true;
		
		
	}
	
	if(dp[0][0]){
		cout << "Yes";
	}else{
		cout << "No";
	}
}