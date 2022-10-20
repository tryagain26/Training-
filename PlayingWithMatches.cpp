#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	vector<int> digits = {6,2 , 5, 5, 4, 5, 6, 3,7, 6};
	int t;
	cin >> t;
	while(t--){
		int x, y, sum = 0;
		cin >> x >> y;
		int z = x+y;
		string s =to_string(z);
		int n =s.length();
		for(int i =0; i < n; i++){
			sum += digits[(s[i]-'0')];
		}
		cout <<sum << endl;
	}
}