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
		string s;
		cin >> s;
		bool ok = true;
		
		if(count(s.begin(), s.end(), 'i') != 1){
			ok = false;
		}
		if(count(s.begin(), s.end(), 'T') != 1){
			ok = false;
		}
		if(count(s.begin(), s.end(), 'm') != 1){
			ok = false;
		}
		if(count(s.begin(), s.end(), 'u') != 1){
			ok = false;
		}
		if(count(s.begin(), s.end(), 'r') != 1){
			ok = false;
		}
		if(ok && n == 5){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
		
	}	
	return 0;
}