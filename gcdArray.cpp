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
	

	for(int i = 0; i < n; i++){
		cin >> A[i];
	
	}
	int ans = 0;
	for(int i = 0 ; i < n-1; i++){
		ans = __gcd(ans, abs(A[i]-A[i+1]));
	}
	if(ans != 1){
		cout << 1;
	}else{
		cout << 2;
	}



	return 0;
}