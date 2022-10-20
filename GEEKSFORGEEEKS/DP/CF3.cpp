#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		long long  a, b, c;
		cin >> a >> b >> c;

		long long d = abs(b-c) + (c-1);
		
		
		if(a-1==d){
			cout << 3;
		}else{
			if(a-1 < d){
				cout <<  1;
			}else{
				cout << 2;
			}
		}
		
		cout << "\n";
	}
}