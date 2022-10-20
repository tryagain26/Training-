#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int mod = k%4;
		if(mod==0){
			cout << "NO\n";
		}else if(mod == 1 || mod == 3){
			cout << "YES\n";
			for(int i = 1 ; i <= n; i+=2){
				cout << i << " " << i+1 << "\n";
			}
			
		}else{
			cout << "YES\n";
			for(int i = 2; i<= n; i+=2){
				if(i%4 == 0){
					cout << i-1 << " " << i << "\n";
				}else{
					cout << i << " " << i-1 << "\n";
				}
			}
			
		}

	}
	return 0;

}