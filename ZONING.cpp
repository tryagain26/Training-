#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N =1000010;
ll pre[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int t;
	cin >> t;
	while(t--){
		int n, k, x;
		cin >> n >> k;
		map<ll, ll> m;
		m[k]++;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(!i){
				pre[i] = x;
			}else{
				pre[i] = pre[i-1] + x;

			}
		
			m[pre[i]]++;
			m[pre[i] + k]++;
			

		}
		for(auto itr = m.begin(); itr!= m.end(); itr++){
			if(itr->second ==2){
				cnt++;
			}
		}
		if(!cnt){
			cout << "HUHU\n";
		}else{
			cout << cnt << "\n";
		}
	}
	return 0;
}
