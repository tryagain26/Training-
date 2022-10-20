#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	
	if(n%2== 0){
		if(n%4 == 0){
			cout << "Yes\n";
			cout <<  (n/4 + 1) << " " << (n/4 - 1); 
		}else{
			cout << "No";
		}
		 
	}else{
		if(n!= 1){
			cout << "Yes\n";
			cout << n/2 + 1 << " " << n/2; 
		}else{
			cout << "No";
		}
	}
	return 0;
}