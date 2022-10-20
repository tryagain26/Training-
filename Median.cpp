#include <bits/stdc++.h>
using namespace std;
//const int N = 15;
#define ll long long


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int q;
	cin >> q;
	multiset<ll> ml;
	for(int i=1;i<=q;i++) {
		
		double ans; 
		string s; 
		cin >> s;
		if(s == "IN"){
			int x;
			cin >> x;
			ml.insert(x);
		}else if(s ==  "MEDIAN"){
			vector<ll> v(ml.begin(), ml.end());
			int k = v.size();
			if(k == 0){
				cout << 0 << "\n";
			}else{
			
				if(k %2 != 0){
					ans = (double)v[(k-1)/2];
					cout << fixed << setprecision(0) << ans << "\n";
				}else{
					ans = ((double)(v[(k-1)/2] + v[(k-1)/2 + 1])/2);
					
					string ss = to_string(ans);
					if(ss[2] != '0'){
					//	cout << ans << "\n";
						cout << fixed << setprecision(1) << ans << "\n";
					}else{
						cout << (int)ans << "\n";
					}
				}
			}

			
		}else if(s == "OUT"){
			int x;
			cin >> x;
			ml.erase(ml.lower_bound(x));
		}
		
	}
	

	return 0;
}

