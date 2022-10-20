#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
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
		
		long long sumE = 0;
		long long sumO = 0;
		int x;
		int cntE = 0, int cntO = 0;
		for(int i = 0 ; i < n ; i++){
			
			cin >> x;
			if(A[i]&1){
				sumO+=A[i];
				cntO++;
		
			}else{
				cntE++;
				sumE += A[i];
			}
		}

		int x, val;
		
		while(q--){
			cin >> x >> val;
			if(x==0){
				sumE += cntE*(val);
			}else{
				sumO += cntO*val;
			}
		}
	}
	return 0;
}