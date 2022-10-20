#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b, cnt;
	cin >> a >> b;
	vector<ll> v(b+1);
	for(int i = 1; i < b+1; i++){
		int ii = i+i;
		while(ii < b+1){
			v[ii] += i;
			ii += i;
		}
	}
	ll sum = 0;
	for(int i = a; i < b+1; i++){
		sum += (abs(v[i]-i));
	}
	cout << sum;
	return 0;
}