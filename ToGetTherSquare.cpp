#include <bits/stdc++.h>
using namespace std;

#define ll long long      
bool ok(ll x){
	ll one = sqrt(x);
	return one*one == x;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ll n;
	cin >> n;
	ll cnt = n-1;
	ll ans = 0;
	for(ll i = 1; i <= n; i++){

		for(ll j=i+1, k = 1; k <= cnt; j++, k++){
			 if(ok(i*j)){
			 	ans++;
			 }
		}
		cnt--;
	}       
	ll ac = 2*ans + n;
	cout << ac;
	return 0;
}