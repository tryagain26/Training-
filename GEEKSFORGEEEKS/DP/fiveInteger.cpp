#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i  < b; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	set<int>s;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	s.insert(d);
	s.insert(e);
	cout << s.size();
	return 0;
}