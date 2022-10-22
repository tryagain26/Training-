#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = (1000000007);
ll product(int a[], int n){
	ll p = 1;
	for(int i = 0 ;i < n; i++){
		if(a[i]!=0){
			p = (p*a[i])%mod;
		}
	}
	return p%mod;
}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int n;
	cin >> n;
	
	int a[n+5];

	for(int i = 0; i < n; i++){
		cin >> a[i];
		


	}
	int pos = 0, nev = 0, zero = 0;
	int maxxNev = INT_MIN;
	//sort(a.begin(), a.end());
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	
	}
	for(int i = 0; i < n; i++){
		if(a[i]==0){
			zero++;
		}else if(a[i] < 0){
			nev++;
			maxxNev = max(maxxNev, a[i]);
		}
	}
/*	
	ll ans;
	cout << zero;
	if(zero == 0){
		if(nev%2 == 0){
			ans = product(a, n);
		}else{
			ans = product(a, n);
			ans/= maxxNev;
		}
	}else{
		if(zero > 1){
			ans = 0;
		}else{
			if(nev%2 == 0){
				ans = product(a, n);
				
			}else{
				ans = 0;
			}
		}
	}
	
	cout << ans;*/
	return 0;
}