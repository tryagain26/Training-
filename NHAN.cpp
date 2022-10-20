#include <bits/stdc++.h>

using namespace std;
int A[100][100], B[100][100], C[100][100];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> B[i][j];
		}
	}
	for(int i =1 ;i <= n; i++){
		for(int j =1; j <= n;j++){
			C[i][j] = 0;
			for(int k = 1; k <= n; k++){
				C[i][j] += (A[i][k]*B[k][j]);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j =1 ; j <= n; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}	