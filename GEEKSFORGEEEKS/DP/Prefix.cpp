#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i  < b; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string X, Y;
	cin >> X >> Y;
	int n = X.length(), m = Y.length();

	if(n == m){
		if(X==Y){
			cout << "Yes";
		}else{
			cout << "No";
		}
	}else{
		if(n > m){
			cout << "No";
		}else{
			if(Y.substr(0, n)==X){
				cout << "Yes";
			}else{
				cout << "No";
			}
		}
	}

}