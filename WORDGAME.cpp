#include <bits/stdc++.h>
using namespace std;

string s[1010][1010];
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
		map<string, int> m;
		for(int i = 0; i < 3; i++){
			for(int j =0; j < n; j++){
				cin >> s[i][j];
				m[s[i][j]]++;
			}
		}
		int c;
		for(int i = 0; i < 3; i++){
			c = 0;
			for(int j = 0; j < n; j++){
				if(m[s[i][j]] == 1){
					c+=3;
				}else if(m[s[i][j]] == 2){
					c+=1;
				}else{
					c+=0;
				}
			}
			cout << c << " ";
		}

		cout << endl;
	}
	return 0;
}