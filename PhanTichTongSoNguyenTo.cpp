#include <bits/stdc++.h>
using namespace std;

const int N = 300010;
bool prime[N];

void sieve(){
	memset(prime, true, sizeof(prime));
	for(int i = 2; i*i <= N; i++){
		if(prime[i]){
			for(int j = i*i; j <= N; j+=i){
				prime[j] = false;
			}
		}
	}

}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	sieve();
	int n, cnt = 0;
	vector<pair<int, int>> vp;
	cin >> n;
	for(int i = 2 ; i < n/2; i++){
		if(prime[i] && prime[n-i]){
			vp.push_back({i, n-i});
			cnt++;
		}
	}
	if(cnt>0){
		cout << cnt << "\n";
		for(auto &x: vp){
			cout << x.first << " " << x.second << "\n";
		}
	}else{

		cout << "Số " << n << " không thể phân tích được";
	}

	return 0;
}