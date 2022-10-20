#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(int set[], int n, int sum){
	if(sum == 0){
		return true;
	}
	if(n==0){
		return false;
	}
	if(set[n-1]>sum){
		return isSubsetSum(set, n-1, sum);
	}
	return isSubsetSum(set, n-1, sum - set[n-1]) || isSubsetSum(set, n-1, sum);

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, sum ;
	cin >> n >> sum;
	int a[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << isSubsetSum(a, n, sum);
	return 0;

}