#include <bits/stdc++.h>
using namespace std;
const int N = 200010;
long long A[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	long long sum = -9999999999, maxx = -9999999999;
	for(int i = 0;i < n; i++){
		sum = max(sum+A[i],A[i]);
		maxx = max(maxx, sum);
		
	}
	cout << maxx;
	return 0;
}