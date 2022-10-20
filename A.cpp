#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	vector<int> v(n);
	set<int> s;
	for(auto &x : v){
		cin >> x;
	}
	vector<int> vv;
	for(int i = 0; i < n-1; i++){
		if(count(v.begin()+i+1, v.end(), v[i])){
			continue;
		}else{
			vv.push_back(v[i]);
		}
	}
	vv.push_back(v[n-1]);
	cout << vv.size() << "\n";
	for(int i = 0; i < (int)vv.size(); i++){
		cout << vv[i] << " ";
	}
	return 0;
}