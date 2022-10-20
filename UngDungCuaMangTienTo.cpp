#include <bits/stdc++.h>
using namespace std;

const int N = 10010;
int A[N];
int main(){
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}
	int preSum[n+1], preMin[n+1];
	preSum[0] = preMin[0] = 0;
	for(int i = 1; i <= n; i++){
		preSum[i] = preSum[i-1] + A[i];
		preMin[i] = min(preMin[i-1], preSum[i]);
		
	}
	int ans = INT_MIN;
	for(int i = 1; i <= n; i++){
		ans = max(ans, preSum[i] - preMin[i]);
	}
	cout << ans;

}