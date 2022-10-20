#include <bits/stdc++.h>
using namespace std;

int rec(int n, int cnt){
	if(n==0){
		return cnt;
	}
	if(n%2!= 0){
		return rec(n-1, cnt+1);
	}else{
		return (min(rec(n/2, cnt+1), rec(n-1, cnt+1)));
	}


}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	cout << rec(n, 0);
	return 0;
}