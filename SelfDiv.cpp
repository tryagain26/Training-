#include <bits/stdc++.h>
using namespace std;
bool ok(string s){
	int k =stoi(s);
	for(int i = 0; i < (int)s.length(); i++){
		if(k%(s[i]-'0') != 0){
			return false;
		}
	}
	return true;

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	int l , r;
	cin >> l >> r;
	vector<int> v;
	for(int i = l; i <= r; i++){
		string s = to_string(i);
		int cnt = count(s.begin(), s.end(), '0');
		if(!cnt){
			if(ok(s)){
				v.push_back(i);
			}
		}else{
			continue;
		}
	}
	cout << v.size() << "\n";
	for(int i = 0; i < (int)v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;

}