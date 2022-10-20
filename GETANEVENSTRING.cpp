#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
int N = 26;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int m = 0, n = s.length();
		vector<bool> prev(N, false);
		rep(i, 0, n){
			if(prev[s[i]-'a']){
				m+=2;
				rep(j, 0 , N){
					prev[j] = false;
				}
			}else{
				prev[s[i]-'a'] = true;
			}
		}
		cout << n - m << "\n";
	}
	return 0;
}