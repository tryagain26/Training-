#include <bits/stdc++.h>
using namespace std;
int b[100010];
int next(int x){
	int y = sqrt(x);
	return (y+1);
}
bool isSquare(int x){
	if(ceil((double)(sqrt(x))) == floor((double)(sqrt(x)))){
		return true;
	}
	return false;
}

void sol(){
	int n;
		cin >> n;
		int k = n-1, cnt = 0;
		vector<int> v;
		int x = next(k);
		int square = x*x;
		bool ok = isSquare(k);

		if(ok){
			for(int i = n-1; i>= 0; i--){
				cout << i << " ";
			}
			cout << "\n";
			return;
		}
		 
		for(int i = n-1; i >= 0; i--){

			if(square - i <= k){
				v.push_back(square-i);
				cnt++;
			}else{
				k = i;

				x = next(k);
				square = x*x;
				//cout << square << " ";
				if(square-i <= k){
					v.push_back(square - i);
					cnt++;
				}
			}
		}
		
		if(n - cnt == 3){
			cout << 1 << " " << 0 << " " << 2 << " ";
		}else if(n-cnt == 2){
			cout << 1 << " " << 0 << " ";
		}else{
			cout << 0 << " ";
		}
		
		for(int i = int(v.size()-1); i >= 0; i--){
			cout << v[i] << " ";
		}
		cout << "\n";

}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		sol();	
	}
	return 0;
}