#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll count3(ll x){
	ll res = 0;
	while(x%3 == 0){
		res++;
		x=x/3;
	}
	return res;

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	vector<pair<ll, ll>> vp(n);
	for(int i = 0;i < n; i++){
		cin >> vp[i].second;
		vp[i].first = -count3(vp[i].second);
	}
	sort(vp.begin(), vp.end());
	for(int i =0; i < n; i++){
		cout << vp[i].second  << " "; 
	}
	return 0;

}