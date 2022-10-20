#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const ll M =1000000007;

ll powMod(ll a, ll b){
	ll res = 1;
	while(b>0){
		if(b%2 != 0){
			res = (res*a)%M;
		}
		b=b/2;
		a = ((a*a)%M + M)%M;
	}
	return (res%M + M)%M;
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	while(t--){
		ll a, m;
		cin >> a >> m;
		ll csc = (m*(m+1))/2;
		cout << powMod(a, csc) << "\n";
	}
}