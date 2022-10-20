#include<bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i <= b; i++)
#define ll long long
const int N = 1000010;
ll A[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ll n, k, rem = 0;
	cin >> n >> k;
	
	map<int, int> m;

	rep(i, 1, n){
		cin >> A[i];
	}
	sort(A+1, A+n+1);

	m[A[1]]++;

	rep(i, 2, n){
		m[A[i]]++;
		if(A[i] - A[i+1] == 1){

			m[A[i]]+=m[A[i]-1]/k;
			rem+= m[A[i-1]]%k;
		}else{
			rem+= m[A[i-1]]/k;

		}
		

	}
	int x = m[A[n]];
	if(x>= k){
		while(x>= k){

			if(x / k + x%k <= k){
				rem+= x/k;
				rem+= x%k;
			}else{


				rem+= x%k;
			}
			x= x/k;
					
		}

	}else{
		
		rem+= x;
	}

	
	
	cout << rem;
	return 0;
}