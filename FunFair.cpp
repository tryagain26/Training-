#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;
int a[N];
long long pre[N];
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n, x, y;
	cin >> n;
	cin >> x >> y;
	for(int i = 0;i < n; i++){
		cin >> a[i];
	}
	pre[0] = a[0];
	pre[0] = (a[0] >= x)?a[0]:0; 
	for(int i = 1; i < n; i++){
		if(a[i]>=x){
			pre[i] = pre[i-1] + a[i];
		}else{
			pre[i] = 0;
		} 
	}
	long long maxx =-1e11;
	int indexR = INT_MIN;
	for(int i = 0; i < n; i++){
		if(maxx < pre[i]){
			maxx = pre[i];
			indexR = i;
		}
	}
	int indexL = INT_MIN;
	
	for(int i = indexR; i >= 0; i--){
		if(pre[i] == 0){
			
			indexL = i;
			break;
		}
	}
	cout << maxx << "\n";

	if(indexL ==  INT_MIN){
		indexL = 1;
	}else{
		indexL += 2;
	}
	cout << indexL << " " << indexR+1;

	return 0;
}