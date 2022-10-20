#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);

	int A[6];
	for(int i = 0; i < 5; i++){
		cin >> A[i];
	}
	for(int i = 4; i >= 0; i--){
		if(A[i] == 1){
			cout << i+1;
		}
	}

	return 0;

}