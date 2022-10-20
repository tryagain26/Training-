#include <bits/stdc++.h>
using namespace std;

const int N  = 1010;

unordered_map<int> A[N];

bool bySo(string a, string b){
	int n = a.length(), m = b.length();
	

	for(int i = 0; i < min(n, m); i++){
		if(A[a[i]] != A[b[i]]){
			return A[a[i]] < A[b[i]];
		}
	}
	return (n < m);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		string s0;
		cin >> s0;
		int n;
		cin >> n;
		vector<string> v(n);
		for(int i = 0; i < (int)s0.length(); i++){
			A[s0[i]] = i;
			
		}

		
		for(int i = 0; i < n; i++){
			cin >> v[i];
			
		}
		//cout << endl;

		
		sort(v.begin(), v.end(), bySo);
		for(int i = 0; i < (int)v.size(); i++){
			cout << v[i] << "\n";
		}
		
	}
}