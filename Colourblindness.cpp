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
		int n;
		cin >> n;
		string s, ss;
		cin >> s >> ss;
		for(int i = 0 ; i < n; i++){
			if(s[i] == 'G'){
				s[i] = 'B';
			}
			if(ss[i] == 'G'){
				ss[i] = 'B';
			}
		}
		bool ok = true;
		for(int i = 0; i < n; i++){
			if(s[i] != ss[i]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;

}