#include<bits/stdc++.h>
using namespace std;

const int N = 1100;
int A[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i  < n; i++){
			cin >> A[i];
		}
		sort(A, A+n);
		
		int cnt =1;
		vector<int> v;
		for(int i = 0; i < n-1; i++){
			if(A[i] != A[i+1]){
				v.push_back(cnt);
				cnt=1;
			}else{
				cnt++;
			}
		}
		v.push_back(cnt);
		sort(v.begin(), v.end());
		int k = v.size();
		if(v[k-1]!= v[k-2]){
			cout  << "YES";
		}else{
			cout  << "NO";
		}
		cout << endl;
	}

	return 0;
}