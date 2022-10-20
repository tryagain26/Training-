#include <bits/stdc++.h>
using namespace std;

int A[10010];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, M;
	cin >> n >> M;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	sort(A, A+n);
	
	for(int i = n-1; i > 0; i--){
		M-= A[i];
	}
	cout << (n-1) + (M/A[0]);
	return 0;


}