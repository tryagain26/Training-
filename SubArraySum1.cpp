#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = (2*1e5) + 10;
ll a[N], b[N], c[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, x;
	cin >> n >> x;
	map<ll, ll> m;
	m[x]++;
	for(int i  = 0; i < n; i++){
		cin >> a[i];
		if(i){
			b[i] = b[i-1] +a[i];
		}else{
			b[i] = a[i];
		}
		m[b[i]]++;
		m[b[i]+x]++;
	}
	int cnt = 0;
	for(auto itr = m.begin(); itr != m.end(); itr++){
		if(itr->second == 2){
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}