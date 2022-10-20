#include <bits/stdc++.h>
using namespace std;

const int N = 200010;
int A[N], B[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n, m;
	cin >> n >> m;
	for(int i = 0; i <n ; i++){
		cin >> A[i];
	}
	
	for(int i = 1; i < n; i++){
		A[i] = A[i] + A[i-1];
		
	}

	for(int i = 0; i < m; i++){
		cin >> B[i];
		
	}

	for(int i = 0; i < m ; i++){
		
	}
}