#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	int n,cnt= 0;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0; i < n-2; i++){
		if(s.substr(i,3) == "xxx"){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}