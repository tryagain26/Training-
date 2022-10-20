#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
#define ll long long
int a[N];
int pre[N];

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n , s;
	cin >> n >> s;
	
	for(int i = 0;i < n; i++){
		cin >> a[i];
	}
	pre[0] = a[0];
	for(int i = 1; i <= n; i++){
		pre[i] = pre[i-1]  + a[i];
	}
	int ans = INT_MAX;
	for(int i = 0; i < n; i++){
		for(int j = i; j< n; j++){
			int x = pre[j]-pre[i]+a[i];
			if(x==s){
				ans = min(ans, j-i+1);
			} 
		}
	}
	cout << ans;
	return 0;
}