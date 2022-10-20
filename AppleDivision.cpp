#include <bits/stdc++.h>
using namespace std;
const int N = 25;
int A[N];

#define ll long long;
ll rec(int A[], int n, ll zero, ll sum){
	if(n==0){
		return abs((sum -zero) - zero);
	}

	return min(rec(A, n-1, zero+A[n-1], sum), rec(A, n-1, zero, sum));
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	ll sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		sum += A[i];
	}
	cout << rec(A, n, 0, sum);

	return 0;
}