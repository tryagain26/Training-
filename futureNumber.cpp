#include <bits/stdc++.h>

using namespace std;
const int N = 2000010;
int A[100010];
bool prime[N+1];
vector<int> v;
void sieve(){
	memset(prime, true, sizeof(prime));
	for(int i = 2; i*i <= N; i++){
		if(prime[i]){
			for(int j = i*i; j <= N; j+=i){
				prime[j] = false;
			}
		}
	}
	for(int i = 2; i < N; i++){
		if(prime[i]){
			v.push_back(i);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	sieve();
	int n, cnt = 0;
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> A[i];
	}
	
	for(int i = 0; i < n; i++){
		if(A[i]%2 == 0){
			if(prime[A[i]/2]){
				cnt++;
				
			}
		}else{
			for(int j = 0; j < N; j++){
				if(v[j] <= A[i]/2){
					if(A[i]%v[j] == 0 && prime[A[i]/v[j]]){
						cnt++;
						break;
					}
				}else{
					break;
				}
			}
		}
	}
	cout << cnt;
	
	
	return 0;
}