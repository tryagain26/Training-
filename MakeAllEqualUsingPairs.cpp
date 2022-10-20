#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int A[N], cnt[N];

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
		map<int, int> m;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			m[A[i]]++;	
		}
		int maxx =-1;
		for(int i =0;i < n; i++){
			maxx =max(m[A[i]], maxx);
		}
		cout << n-maxx<< "\n";
	}
	return 0;

}