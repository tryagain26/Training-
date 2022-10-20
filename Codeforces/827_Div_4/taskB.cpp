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
		int n;
		cin >> n;
		for(int i  = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A, A+n);
		bool ok = false;
		for(int i = 0; i < n-1; i++){
			if(A[i] == A[i+1]){
				ok = true;
				break;
			}
		}
		if(!ok){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}

	return 0;

}