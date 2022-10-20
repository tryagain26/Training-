#include <bits/stdc++.h>
using namespace std;

const int N = 200010;
int A[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		s.insert(A[i]);
	}
	cout << s.size();
	return 0;
}