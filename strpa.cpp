#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	
	while(cin >> n){
		if(n==0){
			break;
		}
		int a[n+1], cnt = 1;
		
		int maxx = -1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		
			if(maxx < a[i]){
				maxx = a[i];
			}
		}
		
		vector<int> v, vv;
		v.push_back(0);
		int k = v.size();
		for(int i = 0; i < n; i++){
			int k = v.size();
			if(a[i] == v[k-1]+1){
				v.push_back(a[i]);
			}else{
				vv.push_back(a[i]);
				
			}
		}
		bool ok = false;
		for(int i = 1; i <= k-1; i++){
			for(auto &x : v){
				if(x!= 0){
					if(x != i){
						
						ok = true;
						break;
					}
				}else{
					continue;
				}
			}
		}
		for(int i = k; i <= n; i++){
			for(auto &&y : vv){
				if(i != y){
					
					ok = true;
					break;
				}
			}
		}
		
		if(!ok){
			cout << "yes\n";
		}else{
			cout << "no\n";
		}
	
	}
}