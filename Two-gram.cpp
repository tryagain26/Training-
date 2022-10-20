#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	string s;
	cin >> s;

	map<string, int> ms;
	for(int i = 0; i <n-1; i++){
		ms[s.substr(i, 2)]++;
	}
	int maxx = -1e9;
	for(auto itr = ms.begin(); itr != ms.end(); itr++){
		if(itr->second > maxx){
			maxx = itr->second;
		}
	}
	for (auto itr = ms.begin(); itr!= ms.end(); itr++){
		if(itr->second == maxx){
			cout << itr->first;
			return 0;
		}
	}
	return 0;
}