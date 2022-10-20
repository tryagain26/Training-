#include <bits/stdc++.h>
using namespace std;
const int N = 60050;
int t[N];
int r[N], f[N];


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int N;
	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> t[i];
	}
	for(int i = 1; i <= N-1; i++){
		cin >> r[i];
	}
	f[N] = t[N];
	f[N+1] = 0;
	for(int i = N-1; i >= 0; i--){
		f[i] = min(t[i] + f[i+1], r[i] + f[i+2]);
	}

	cout << f[1];
	return 0;

}