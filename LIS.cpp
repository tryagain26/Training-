#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int A[N];
int lis[N] = {0};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	 
	lis[0] = 1;
	for(int i = 1; i < n; i++){
		lis[i] = 1;
		for(int j = 0; j < i; j++){
			if(A[i] > A[j] && lis[i] < lis[j] + 1){
				lis[i] = lis[j] + 1;
				
			}
		}
	
	}
	cout << *max_element(lis, lis+n);


}