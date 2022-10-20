#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	double ans = (double)sqrt(n);
	cout << fixed << setprecision(20)<< ans;
	return 0;
}