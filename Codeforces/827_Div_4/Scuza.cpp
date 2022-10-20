#include <bits/stdc++.h>
using namespace std;

const int N = 110;
int A[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		for(int i = 1; i < n; i++){
			A[i]+= A[i-1];
		}
	}
	return 0;
}