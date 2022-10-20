#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 100010;
ll A[N];
ll findK(ll one, ll l){
	
	ll rem = one%l;
	one = one-rem;
	return one+l;

}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		bool ok = false;
	
		map<ll, ll> mp;
		ll f, cnt = 0;
		for(ll i = 1; i <= n; i++){
			cin >> A[i];
			if(A[i]%m !=0){
				f = findK(A[i], m);
				mp[f-A[i]]++;
			}else{
				ok = true;
			}
		}

		bool ok1 = false;
		for(auto itr = mp.begin(); itr!= mp.end(); itr++){
			if(itr->second==1){
				cnt++;
				itr->second = 0;
			}else{
				ok1 = true;
			}
		}		

		
		
		
		if(ok){
			cnt++;
		}
		if(ok1){
			cnt++; 
		}
		cout << cnt << "\n";
		

	}
}