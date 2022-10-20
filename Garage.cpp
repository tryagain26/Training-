#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	long long ans;
	
	cin >> n;
	if(n == 1){
		cout << 3 << "\n";
	}else{
		if((n-1) % 3 == 0){
			ans = 8 + 4*(n/3 - 1);
		}else{
			if((n-1)%3 == 2){
				ans = 4*((n-1)/3 + 2);
				ans -= 1;
			}else{
				ans = 4*((n-1)/3 + 2);
				ans -=3;
			}
			
		}
		cout << ans << "\n";
	}
	
	return 0;

}