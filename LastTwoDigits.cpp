#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int A[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	cout << (n%100)/10 << n%10;
	return 0;
}