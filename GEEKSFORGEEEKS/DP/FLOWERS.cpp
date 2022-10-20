#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define ll long long
const ll M = (1e9 + 7), N = 100010;
ll dp[N], pre[N];
void progress(int k){

	rep(i, 0, N){
		if(i < k){
			dp[i] = 1;
		}else{
			dp[i] = (dp[i-1] + dp[i-k])%M;
		}
	}
	pre[0] = 0;
	rep(i, 1, N+1){
		pre[i] = (pre[i-1] + dp[i-1])%M;
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int t, k;	
	cin >> t  >> k;
	progress(k);
	
	while(t--){
		int l,r ;
		cin >> l >> r;
		ll ans = pre[r+1]-pre[l];
		if(ans < 0){
			ans = (ans%M + M);
		}
		cout << ans%M << "\n";	
	}

	
	return 0;
}