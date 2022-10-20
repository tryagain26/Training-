#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll dis(ll x1, ll y1, ll x2, ll y2 ,ll d){
	return ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) < (d*d);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ll n, fo, d;
	cin >> n >> fo >> d;
	vector<pair<ll, ll>> vp;
	ll x, y;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		vp.push_back(make_pair(x, y));
	}
	fo--;
	vector<pair<ll, ll>> F0, F1;
	ll cnt0 = 0, cnt1 = 0;
	for(int i = 0; i < n; i++){
		if(i!= fo){
			
			if(dis(vp[i].first, vp[i].second, vp[fo].first, vp[fo].second, d)){
				cnt0++;
				F0.push_back(make_pair(vp[i].first, vp[i].second));
			}else{
				F1.push_back(make_pair(vp[i].first, vp[i].second));
			}
		}
	}
	
	for(int i =0 ; i < (int)F1.size(); i++){
		for(int j = 0; j < (int)F0.size(); j++){
			if(dis(F1[i].first, F1[i].second, F0[j].first, F0[j].second, d)){
				cnt1++;
				break;
			}
		}
	}
	cout << cnt0 << " " << cnt1 << endl;
}
