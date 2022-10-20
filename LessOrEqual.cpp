#include <bits/stdc++.h>
using namespace std;
const int N = (2*1e5) + 10;
int a[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	if(k == 0){
		if(a[0] == 1){
			cout << -1;
		}else{
			cout << 1;
		}
		return 0;
	}
	for(int i = 0; i < n; i++){
		if(i== k-1){
			if(a[i] != a[i+1]){
				cout << a[i];
				return 0;
			}else{
				cout << -1;
				return 0;
			}
		}
	}
	return 0;
}