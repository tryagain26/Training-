#include <bits/stdc++.h>
using namespace std;


int inc(int x, int num){
	int up = 1;
	if(x == 0){
		return num;
	}
	while(up<=x){
		up*=num;
	}
	return up;
}
void sol(){
	int n, l ,r ;
	cin >> n >> l >> r;
	int temp = l, ans;
	vector<int> v;
	for(int i = 1; i <= n; i++){
		if(i == 1){
			v.push_back(l);
		}else{
			ans = (temp/i)*i + inc(temp%i, i);
			if(ans <=r){
				v.push_back(ans);
			}
			
		}
		
	}

	
	if(v.size() == n){
		cout << "YES\n";
		for(auto& x: v){
			cout << x << " ";
		}
		cout << "\n";
	}else{
		cout << "NO\n";
	}
	
}
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		sol();

	}
	return 0;
}