#include <bits/stdc++.h>
using namespace std;

#define ll long long
void sol(){
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll one = __gcd(a, b), two= __gcd(c,d);
	a/=one, b/= one, c/=two, d/=two;
	ll o = a*d, oo = b*c;
	if(o == oo){
		cout << 0 << "\n";
	}else{
		if(o == 0 || oo ==0){
			cout << 1 << "\n";
		}else{
			if(oo%o != 0 && o%oo !=0){
				cout << 2 << "\n";
			}else{
				cout << 1 << "\n";

			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		sol();
	}
	return 0;

}