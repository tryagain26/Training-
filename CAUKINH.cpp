#include <bits/stdc++.h>
using namespace std;
const int N = (1e6 + 10);
#define ll long long

const ll M = (1e9)+7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	string s, ss;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s >> ss;
		int len = s.length();
		bool ok = false;
	
		ll p = 1;
		for(int j = 0; j < len; j++){
			if(s[j] == ss[j]){
				if(s[j] == 'O'){
					cout << 0 << "\n";
					ok = true;
					break;
				}else{
					p = (p*2)%M;	
				}
			}else{
				continue;
			}
		}
		if(!ok){


				
		
			ll ans = (p%M + M)%M;
			cout << ans << "\n";
		}
	}
}