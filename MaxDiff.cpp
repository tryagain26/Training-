#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 100010;
ll a[N];
int main(){

	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	ll n, z, w;
	cin >> n >> z >> w;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	cout << max(abs(a[n-1]-a[n-2]), abs(a[n-1]-w));
//	cout << minn;
}