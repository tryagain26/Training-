#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 200010;
const int M = (1e9)+7;

ll cnt[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	for(int i = 0; i < 9; i++){
		cnt[i] = 1;
	}
	
	cnt[9] = 2;
	for(int i = 10; i < N; i++){
		
		cnt[i] = (cnt[i-9]+ cnt[i-10])%M;	
	}
	
	int t;

	cin >> t;
	while(t--){
		string s;
		ll m;
		cin >> s >> m;
		ll len = 0;
		for(int i = 0; i < s.length(); i++){
			int pos = (s[i] - '0') + (m-1);
			
			len += cnt[pos];

		}

		cout << len%M << "\n";
	}
	
	


}