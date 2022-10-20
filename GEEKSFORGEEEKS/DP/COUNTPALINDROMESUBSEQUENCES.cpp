
#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string s;
	cin >> s;
	int n = s.length();
	// cntP[i][j] = số chuỗi con Palindrome từ vị trí i đến vị trí j 
	// cntP[i][j] = 1 + cntP[i+1][j] + cntP[i][j-1] nếu s[i] = s[j]
	// cntP[i][j] = cntP[i+1][j] + cntP[i][j-1] - cntP[i-1][j-1]
	int cntP[n+2][n+2] = {0};
	// abacb 
	for(int i = 0; i < n; i++){
		cntP[i][i] = 1;
	}

	for(int i = 2; i <= n; i++){
		for(int j = 0; j <= n-i; j++){
			int k = i+j - 1;
			if(s[j]==s[k]){
				cntP[j][k] = cntP[j+1][k] + cntP[j][k-1] + 1;
			}else{
				cntP[j][k] = cntP[j+1][k] + cntP[j][k-1] - cntP[j+1][k-1];

			}
		}
	}
	cout << cntP[0][n-1];
	return 0;


}