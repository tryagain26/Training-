#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
		ll sum = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == 'L'){
				sum += (i);
			}else{
				sum += (n-i-1);
			}
		}
		
		vector<ll> v;
		int l = 0, r = n-1;
		int m = (l+r)/2;
		for(int i = 0; i < n; i++){
			if(i < m){
				if(s[i] == 'L'){
					v.push_back(n-i-1-i);
				}
			}else if(i == m){
				if(m != n-m-1){
					if(s[i] == 'L'){
						v.push_back(abs(n-i-1-i));
					}
				}
			}else{
				if(s[i] == 'R'){
					v.push_back(i - n + i+1);
				}
			}
		}
		sort(v.begin(), v.end());
		
	
		int k = v.size();
		for(int i = k-1; i >= 0; i--){
			sum += v[i];
			cout << sum << " ";
		}
		for(int i = 0; i < n-k; i++){
			cout << sum << " ";
		}

		cout << "\n";
		


	}

	
	return 0;


}