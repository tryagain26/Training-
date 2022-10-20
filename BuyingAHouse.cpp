#include <bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n, love, money;

	cin >> n >> love >> money;
	vector<int> v(n);
	int minn = 2e9;
	for(int i = 0; i < n; i++){
		cin >> v[i];
		if(v[i]!=0 && money >= v[i]){
			minn = min(minn, 10*abs(love - i-1));
		}else{
			continue;
		}
	}
	cout << minn;
	return 0;
}