#include <bits/stdc++.h>
using namespace std;
int bS1(vector<int>& A, int n, int x){

	int l = 0, r = n-1;
	while(l < r){
		int m = (l+r)/2;
		if(A[m]<= x){
			l= m+1;
		}else{
			r = m;
		}
	}
	if(A[l]<=x){
		return -1;
	}
	return l;
}





int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while(t--){
		int x;
		char c;
		cin >> x >> c;
		string s;
		cin >> s;
		vector<int> indexC;
		vector<int> indexG;
	
		for(int i= 0 ;  i < x; i++){
			if(s[i] == 'g'){
				indexG.push_back(i+1);
			}else if(s[i] == c){
				indexC.push_back(i+1);
			}else{
				continue;
			}
		}
		int l1 = indexG.size();
		int l2 = indexC.size();
		for(auto &x:indexC){
			cout << x << " ";
		}
		cout << endl;
		for(auto &x:indexG){
			cout << x << " ";
		}
		cout << endl;
		int maxx =2e9;
		for(int i = 0; i < l1; i++){
			int inn = bS1(indexC, l2, indexG[i]);
			
	

			if(inn!=-1){
				maxx = min(maxx, x-indexC[inn]+indexG[i]);
			}else{
				continue;
			}

			cout << inn << " " << maxx << "\n";
		}
		cout << maxx << "\n";
		
	}
	return 0;

}