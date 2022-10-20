#include <bits/stdc++.h>
using namespace std;

int rec(string X, int l , int r, int cnt){
	if(l>r){
		return cnt;
	}
	if(l==r){
		return cnt+1;
	}
	if(X[l] == X[r]){
		cnt = rec(X, l+1, r-1, cnt+2);
		return max(cnt, max(cnt, max(rec(X, l+1, r, 0), rec(X, l, r-1, 0)))); 
	}
	return max(rec(X, l+1, r, 0), rec(X, l, r-1, 0));
}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		cout << rec(s, 0, n-1, 0) << "\n";
	}
	return 0;

}