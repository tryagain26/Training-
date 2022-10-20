#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int A[N];
int cnt2(int x){
	int cnt= 0;
	while(x%2==0){
		x=x/2;
		cnt++;
	}
	return cnt;
}
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
		vector<int> v;

		long long sum = 0;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			sum += cnt2(A[i]);
			v.push_back(cnt2(i+1));

		}
		
		
		sort(v.begin(), v.end());
		int index = n-1, cnt = 0;
		while(sum < n && index >=0 ){
			sum += v[index];
			//cout << sum << " ";
			index--;
			cnt++;
		}
		if(sum >= n){
			cout << cnt << "\n";
		}else{
			cout << -1 << "\n";
		}
	}
	return 0;
}