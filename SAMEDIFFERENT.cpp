#include <bits/stdc++.h>
using namespace std;

const int N = 200010;
#define ll long long
ll A[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;

	while(t--){
		map<ll ,ll> m;
		int n;
		cin >> n;
		ll sum = 0;
		for(int i = 1; i <= n; i++){
			cin >> A[i];
			m[A[i]-i]++;
		}
		for(int i = 1; i <= n; i++){
			sum += 1ll*((m[A[i]-i])*(m[A[i]-i] - 1))/2;
		
			m[A[i]-i] = 0;
		}
		cout << sum << "\n";

	}
}