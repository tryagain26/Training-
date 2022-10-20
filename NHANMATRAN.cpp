#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, a, b) for(int i = a ; i <= b; i++)
const int N = 110;

ll A[N][N], I[N][N], C[N][N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll k, n, x, y, s;
	cin >> k >> n >> x >> y >> s;
	

	rep(step, 1, k){
		rep(i, 1, n){
			rep(j, 1, n){
				cin >> A[i][j];

			}
		}
		if(step == 1){
					rep(k, 1, n){
						I[x][k] = A[x][k];
					}
				}else{
					rep(r1, 1, 1){
						rep(c2, 1, n){
							C[r1][c2] = 0; 
							rep(r2, 1, n){
								C[r1][c2] += (I[r1][r2]*A[r2][c2]);

							}
							

						}
						cout << endl;
					}
					rep(r, 1, n){
						I[x][r] = C[x][r];
						
			
					}
				}
	}

	ll ans = (I[x][y])%s;
	cout << ans;
	return 0;
}
