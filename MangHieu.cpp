#include <bits/stdc++.h>
using namespace std;


int main(){
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x :v){
		cin >> x;
	}
	vector<int> differentArray(n-1);
	for(int i = 0; i < n-1; i++){
		differentArray[i] = v[i+1] - v[i];
		cout << differentArray[i] << " ";
	}
	return 0;
}