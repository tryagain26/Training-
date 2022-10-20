#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	while(t--){
		int A[3];
		for(int i = 0; i < 3; i++){
			cin >> A[i];

		}
		sort(A, A+3);
		if(A[2] == A[1]+A[0]){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}