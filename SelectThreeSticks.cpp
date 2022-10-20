#include <bits/stdc++.h>
using namespace std;
const int N = 310;
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
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A, A+n);
		
		int maxx = INT_MAX;
		for(int i =1; i < n-1; i++){
			maxx = min(maxx, A[i+1] - A[i-1]);
			
		}
		cout << maxx <<"\n";
	
	}
}