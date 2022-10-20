#include <bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int a;
	cin >> a;
	a *= 10;
	int num = (a/5)+1;
	num += (a/5);
	num += (a/5);
	num += (a/5)-1;
	cout << num;
	return 0;
}