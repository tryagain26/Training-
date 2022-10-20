#include <bits/stdc++.h>
using namespace std;


#define rep(i, a, b) for(int i = a; i  < b; i++)
const int N = 200010;
int A[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	rep(i,0, n){
		cin >> A[i];
	}
	deque<int> dq;
	rep(i, 0, n-1){
		dq.push_back(A[i]);
	}
	int cnt = 0;
	dq.push_front(A[n-1]);
	int i;
	rep(i,0, (int)dq.size()){
		int x = ((i-1)%n + n)%n, z = (i+1)%n;

		if(x == dq[i] || dq[i] == i || z == dq[i]){
			cnt++;
		}
		
	}
	cout << cnt;
	
}