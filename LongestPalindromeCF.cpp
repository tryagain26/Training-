#include <bits/stdc++.h>
using namespace std;


string s[101];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	set<string> dict;

	for(int i = 0 ; i < n; i++){
		cin >> s[i];
		dict.insert(s[i]);
	}
	vector<string> l, r;
	string mid;
	for(int i = 0; i < n; i++){
		string t = s[i];
		reverse(t.begin(), t.end());

		if(t== s[i]){
			mid = t;
		}else if(dict.find(t) != dict.end()){
			l.push_back(s[i]);
			r.push_back(t);
			dict.erase(s[i]);
			dict.erase(t);

		}
	}
	cout << l.size()*m*2 + mid.size() << "\n";
	for(auto &x: l){
		cout << x;
	}
	cout << mid;
	reverse(r.begin(), r.end());
	for(auto &x: r){
		cout << x;
	}

}