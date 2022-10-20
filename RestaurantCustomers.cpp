#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n, a, b;
	cin >> n;
	
	vector<pair<int, int>> vp;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		vp.push_back({a, 1});
		vp.push_back({b, 0});
	}
	sort(vp.begin(), vp.end());
	
	int cnt =0, maxx = 0;
	for(int i = 0; i < (int)vp.size(); i++){
		if(!vp[i].second){
			cnt--;
		}else{
			cnt++;
			maxx =max(cnt, maxx);
		}
	}
	cout << maxx;
	return 0;
	
}