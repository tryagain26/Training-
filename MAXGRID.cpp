#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, b) for(int i = a; i < b; i++)
const int N = 10010;
int A[N][N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m, nev = 0, minn = INT_MAX;
	cin >> n >> m;
	ll sum = 0;
	rep(i, 0, n){
		rep(j, 0, m){
			cin >> A[i][j];
			if(A[i][j] < 0){
				nev++;
			}
			
			minn = min(abs(A[i][j]), minn);
		}
	}
	bool ok = false;
	rep(i, 0, n){
		rep(j, 0, m){
			
			if(nev&1 && !ok &&abs(A[i][j]) == minn){
				sum-= abs(A[i][j]);
				sum-= abs(A[i][j]);
				ok = true;
			}		

			sum += abs(A[i][j]);
			
		}
	}

	ll ans = sum;
	cout << ans;

	return 0;
}