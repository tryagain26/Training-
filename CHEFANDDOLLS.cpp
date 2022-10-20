#include <bits/stdc++.h>
using namespace std;

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
		map<int ,int> m;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			m[A[i]]++;
		}
		for(int i = 0;i < n; i++){
			if(m[A[i]]%2!=0){
				cout << A[i] << "\n";
				break;
			}
		}
		cout << endl;

	}
	return 0;

}