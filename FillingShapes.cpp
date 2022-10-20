#include <bits/stdc++.h>
using namespace std;


int rec(int n){
	if(n%2 != 0){
		return 0;
	}
	if(n==0){
		return 0;
	}
	if(n==2){
		return 2;
	}
	return 2*rec(n-2);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	cout << rec(n);
	return 0;
}