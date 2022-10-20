#include<bits/stdc++.h>
using namespace std;



int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n==3){
			cout << -1 ;
		}else{
			if(n%2 == 0){
				for(int i = n; i >= 1; i--){
					cout << i << " ";
				}
			}else{
				for(int i = n; i > (n+1)/2; i--){
					cout << i << " ";
				}
				for(int i = 1; i <= (n+1)/2 ; i++){
					cout << i <<  " ";
				}
			}
		}
		cout << endl;
	}
	return 0;

}