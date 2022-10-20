#include <bits/stdc++.h>
using namespace std;

const int N = 200010;
int A[N];

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n ; i++){
			cin >> A[i];
		}
		int ans;
		bool ok = false;
		int l = n-2, r=  n-1, minn = INT_MIN;
		while(l!= 0 || r != 0){
			if(__gcd(A[l], A[r]) == 1){
				ans  = l+r+2;
				break;
			}else{
				
				l--;
			}
		}
		l = 0, r= 1;
		while(l != n || r != n){
			if(__gcd(A[l], A[r]) == 1){
				ans = l+r + 2;
				
			}
		}
		
	}
}