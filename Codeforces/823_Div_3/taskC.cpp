#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2010;
ll A[N];
ll pre[N];


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int t;
	cin >> t;
	while(t--){

		ll n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		pre[0] = A[0];

		for(int i = 1; i < n ; i++){
			pre[i] = pre[i-1] + A[i];
		
		}
		vector<ll> uoc;
		for(int i = 1; i <= sqrt(pre[n-1]); i++){
			if(pre[n-1]%i == 0){
				if(pre[n-1]/i == i){
					uoc.push_back(i);
				}else{
					uoc.push_back(i);
					uoc.push_back(pre[n-1]/i);
				}
			}
		}

		ll val = 0;
		
		ll minn = n, index = 0;
		ll maxx;
		for(int i = 0; i < (int)uoc.size(); i++){
			//cout << uoc[i] << " ";
			val = 0;
			index = 0;
			maxx = 0;
			for(int j = 0; j < n; j++){
				if(pre[j] - val  == pre[n-1]/uoc[i] ){
					val = pre[j];
					

					maxx = max(maxx, j-index + 1);
					//cout << val << " " << j - index + 1 << endl;
					index = j+1;
					
				}else if(pre[j]-val > pre[n-1]/uoc[i]){
					maxx = 0;
					break;
				}
			

			}
			if(maxx != 0){
				
				minn = min(minn, maxx);
			}

		
		}
		
		
			cout << minn;
		
		
	
		cout << "\n";
		
	}
}