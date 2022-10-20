#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	vector<int> v(n);
	set<int> s;
	for(auto &x : v){
		cin >> x;
	}
	for(int i = (int)v.size()-1; i>= 0; i--){
		s.insert(v[i]);
	}
	set<int>::reverse_iterator itr;
	for(itr = s.rbegin(); itr != s.rend(); itr++){
		cout << *itr << " ";
	}
}