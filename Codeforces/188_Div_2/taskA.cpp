#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	long long k, n, ans;
	cin >> n >> k;
	if(n%2 == 0){
		if(k<=n/2){
			ans = 1 + (k - 1)*2;
		}else{
			ans = 2 + (k - n/2 - 1)*2;
		}
	}else{
		if(k <= n/2 + 1){
			ans = 1 + (k-1) * 2;
		}else{
			ans = 2 + (k - n/2 - 2)*2;
		}
	}
	cout << ans;
	return 0;
}