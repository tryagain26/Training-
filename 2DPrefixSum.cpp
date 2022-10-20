#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int a[N][N];
int pre2d[N][N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < n; j++){
			cin >> a[i][j];
		}
	}	
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < n; j++){
			if(i==0 && j == 0){
				pre2d[i][j] = a[i][j];
			}else if(i == 0 && j > 0){
				pre2d[i][j] = pre2d[i][j-1] + a[i][j];
			}else if(i > 0 && j == 0){
				pre2d[i][j] = pre2d[i-1][j] + a[i][j];
			}else{
				pre2d[i][j] = pre2d[i-1][j] + pre2d[i][j-1] + a[i][j] - pre2d[i-1][j-1];
			}
		}
	}
	for(int i  = 0 ; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << pre2d[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}