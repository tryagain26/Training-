#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> vp = {{-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1,2}};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	int k = vp.size();
	
	for(int i = 0; i < k; i++){
		if(x1+vp[i].first == x2 && y1+vp[i].second == y2){
			cout << "Yes\n";
			return 0;
		}
	}	
	cout << "No\n";
	return 0;
}