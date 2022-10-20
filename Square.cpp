#include <bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int a, b;
	cin >> a >> b;
	for(int i = 1; i <= a-b; i++){
		for(int j = 1; j <= a; j++){
			cout << "* ";
		}
		cout << "\n";
	}
	for(int i = 1; i <= b; i++){
		for(int j = 1; j <= a-b; j++){
			cout << "* ";
		}
		cout << "\n";
	}

	return 0;
}