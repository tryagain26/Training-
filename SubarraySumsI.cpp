#include <bits/stdc++.h>
using namespace std;

const int N =(2*1e5) + 10;
int A[N], pre[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	long long sum = 0, zero = 0;
	map<long long, long long> m;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		sum += A[i];
		m[(sum%n + n)%n]++;
		
	}
	long long ans = 0;
	sum = 0;
	for(int i = 0; i < n; i++){
		sum += A[i];
		if(sum%n == 0){
			ans++;
		}
		
		ans += ((m[(sum%n + n)%n])*(m[(sum%n + n)%n] - 1))/2;
		m[(sum%n + n)%n] = 0;
		
		
	}
	

	cout << ans;
	return 0;

}