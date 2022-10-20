#include<bits/stdc++.h>
using namespace std;

/*
int Cutting(int cost[], int n){
	int val[n+1];
	val[0] = 0;

	for(int i = 1; i <= n; i++){
		int max_val = INT_MIN;
		for(int j = 0; j < i; j++){
			max_val = max(max_val, cost[j] + val[i-j-1]);
		} 
		val[i] = max_val;
	}
	return val[n];

}
*
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	int A[n+1];
	/*
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	*/

	cout << 1 << endl;
	//cout << A[0] << endl;
	//cout << Cutting(A, n);
	return 0;
}