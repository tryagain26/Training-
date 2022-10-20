#include <bits/stdc++.h>
using namespace std;

int rec(string s, int n){
	if(n == 2){
		return 0;
	}
	return rec(s.substr(0, n-1), n-1) + rec(s.substr(1, n-1), n-1);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	/*
	int t;
	cin >> t;
	while(t--){

	}
	*/
	return 0;
}