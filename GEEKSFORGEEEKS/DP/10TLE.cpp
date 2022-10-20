#include <bits/stdc++.h>
using namespace std;

const int N  = 100010;

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
		int cnt = 0;
		for(int i =0 ;i < n; i++){
			cin >> A[i];
			if(A[i] == 1){
				cnt++;
			}
		}
		for(int i = 0; i < cnt ; i++){
			cout << 1 << " ";
		}
		sort(A, A+n);
		if(n-cnt == 2 && A[n-2] == 2 && A[n-1] == 3){
			cout << "2 3"; 
		}else{
			for(int i =n-1; i>= cnt; i--){
				cout << A[i] << " ";
			}
		}
		cout << "\n";
	}
}