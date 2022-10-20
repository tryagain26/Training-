#include <bits/stdc++.h>
using namespace std;

const int N = 200010;
int A[N], B[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n,m, k;
	cin >> n >> m >> k;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	sort(A, A+n);
	for(int i = 0; i < m; i++){
		cin >> B[i];
	}
	sort(B, B+m);
	int t = 0, d = 0;
	// 45 60 60 80 
	// 30 60 75
	
	while(t<n || d <= m-1){
		if(*lower_bound(B+d, B+m, A[t]) <= A[t]+k && *lower_bound(B+d, B+m, A[t]) >= A[t]-k){
			
			cout << *lower_bound(B+d, B+m, A[t]) << " " << d << endl;
			t++;
			d=   lower_bound(B+d, B+m, A[t])-B;
			d++;
		}else{
			t++;
			d = lower_bound(B+d, B+m, A[t])-B;
		}
	}
	
	
	return 0;
	
	return 0;
}