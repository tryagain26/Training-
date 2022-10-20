#include <bits/stdc++.h>
using namespace std;

int bSearch(int A[], int n, int x){
	int l =1, r= n;
	while(l < r){
		int m = (l+r)/2;
		if(A[m] < x){
			l = m+1;
		}else{
			r = m;
		}
	}
	if(A[l] < x){
		return -1;
	}
	return l;
}
int bSearch1(int A[], int n, int x){
	int l = 1, r= n; 
	while(l < r){
		int m = l + (r-l + 1)/2;
		if(A[m] < x){
			l=m;
		}else{
			r = m-1;
		}
	}
	if(A[l] > x){
		return -1;
	}
	return l;

}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	int A[n+5];
	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}
	cout << bSearch(A, n, 5);
	cout << bSearch1(A, n, 5);

	return 0;
}