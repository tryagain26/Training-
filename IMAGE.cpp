#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		string s, ss;
		cin >> s >> ss;
		string sss = s+ss;
		set<char> sc;
		for(int i = 0; i < sss.length(); i++){
			sc.insert(sss[i]);
		}
		cout << sc.size()-1 << "\n";
	}
	return 0;
}