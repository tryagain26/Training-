#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1010;
const ll mod = 1000000007;
ll a[N];

ll pro(ll a[], ll n, ll m){
	ll p = 1;
	for(ll i = 0 ;i < n; i++){
		a[i] <0 ? a[i]*=(-1):a[i]*=1;
		if(a[i]!=0){
			p = (p%m)*(a[i]);
		}
	}
	return (p%m +m)%m;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ll n;
	cin >> n;


	for(ll i = 0; i < n; i++){
		cin >> a[i];
		
	}
	ll nev = 0, zero = 0;
	ll maxxNev = INT_MIN;
	sort(a, a+n);

	for(ll i = 0; i < n; i++){
		if(a[i]==0){
			zero++;
		}else if(a[i] < 0){
			nev++;
			maxxNev = max(maxxNev, a[i]);
		}else{
			continue;
		}
	}
	maxxNev*=(-1);
	ll ans;
	
	if(zero == 0){
		if(nev%2 == 0){
			ans = pro(a, n, mod);
		}else{
			ll p =1;
			for(int i = 0; i < n; i++){
				a[i] <0 ? a[i]*=(-1):a[i]*=1;
				if(a[i]!= 0 && a[i]!= maxxNev){
					p =(p%mod)*a[i];
				}
			}
			ans = (p%mod + mod)%mod;
			
		}
	}else{
		if(zero > 1){
			ans = 0;
		}else if(zero == 1){
			if(nev%2 == 0){
				ans = pro(a, n, mod);
				
			}else{
				ans = 0;
			}
		}
	}
	
	cout << ans;
	return 0;
}