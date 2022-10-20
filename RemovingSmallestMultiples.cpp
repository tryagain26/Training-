#include <bits/stdc++.h>
using namespace std;
#define rep(i , a, b) for(int i = a; i <  b; i++)
#define ll long long 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s; 
		ll sum  = 0;
		
	
		ll b[n+10] = {0};
		rep(i, 0, n){
			if(s[i] == '0'){
				b[i+1] = (i+1);
			}else{
				b[i+1] = 0;
			}
		}
		int cnt;

		
		rep(i, 1, n+1){
			cnt = 2;
			if(b[i] != 0){
				rep(j, 1, 1000000){

					if(i*cnt <= n && b[i*cnt] != 0){
					
						b[i*cnt] = i;
						cnt++;
					} else{
						break;
					}
				}

			}else{
				continue;
			}
		}
		rep(i, 1, n+1){
			cout << b[i] << " ";
			sum += b[i];
		}
		cout << sum << "\n";

	
		
	}
	return 0;

}