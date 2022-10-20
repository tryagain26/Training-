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
		int x, cntE = 0, cntO =0;
		
		for(int i = 0 ; i < n ; i++){
			
			cin >> x;
			if(x%2!=0){
				sumO+= x;
				cntO++;
			}else{
				sumE += x;
				cntE++;
			}
		}
		long long ans;
		while(q--){
			int op, val;
			cin >> op >> val;
			if(op == 0){
				

				
				sumE += val*(cntE);
				if(val%2!=0){
					cntO = n;
					cntE = 0;
					sumO += sumE;
					sumE = 0;
				}
			}else{
				
				sumO += val*(cntO);
				if(val%2!=0){
					cntE = n;
					cntO= 0;
					sumE+= sumO;
					sumO = 0;

				}
			}
			ans = sumO + sumE;
			cout << ans << "\n";
		}

		/*1 3 2 4 10 48
		1 6
		0 5
		0 4
		0 5
		1 3
		0 12
		0 1
		4 64 
		16 64 
		100 0 
		100 0 
		100 0 
		0 118 

		*/

	}
	return 0;
}