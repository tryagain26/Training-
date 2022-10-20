#include<bits/stdc++.h>
using namespace std;

 const int N =55;
 int A[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	 int t;
	 cin >> t;
	 while(t--){
	 	int n;
	 	cin >> n;
	 
	 	for(int i = 0; i < n ; i++){
	 		cin >> A[i];

	 	}
	 	string s;
	 	cin >> s;
	 	vector<pair<int, char>> vp;
	 	for(int i = 0; i < n; i++){
	 		vp.push_back({A[i], s[i]});
	 	}
	 	sort(vp.begin(), vp.end());
	 	bool ok = true;
	 	for(int i = 0; i < n-1; i++){
	 		//cout << vp[i].first << " " << vp[i].second << endl;
	 		int x = vp[i].first;
	 		char y = vp[i].second;
	 		if(x == vp[i+1].first){
	 			if( y != vp[i+1].second){
	 				ok = false;
	 				break;
	 			}else{
	 				continue;
	 			}
	 		}
	 	}
	 	if(ok){
	 		cout << "YES";
	 	}else{
	 		cout << "NO";
	 	}
	 	cout << "\n";
	 }
}	