#include<bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i =a ; i < b; i++)
#define rep1(i, a, b) for(int i = a; i <= b; i++)
#define repV(i, a, b) for(int i = a; i >= b; i--)


int lcm(int a, int b){
	return (a*b)/__gcd(a, b);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool ok = false;
		if(lcm(1, n) == lcm(2, n)){
			cout << n << " ";
			ok = true;
		}else{
			cout << 1 << " ";

		}
		if(ok){
			cout << 1 << " ";
		}else{
			if(n!=1){
				cout << n << " ";
			}
		}
		for(int i = 2; i <= n-1; i++){
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}