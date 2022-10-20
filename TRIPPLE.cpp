#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int n, S, cnt = 0;
	cin >> n >> S;
	for(int i = 0 ; i <= n; i++){
		for(int j = 0; j <= n; j++){
			if(i+j > S){
				break;
			}else{
				if(S-(i+j) <= n){
					cnt++;
				}
			}
		}

	}
	cout << cnt;
	return 0;

}