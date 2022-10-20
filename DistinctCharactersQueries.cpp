#include <iostream>
using namespace std;


int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string s;
	cin >> s;
	vector<set<int>> vs(26);
	for(int i =0 ; i < int(vs.size()); i++){
		
	}
	int q;
	cin >> q;
	while(q--){
		int x, l , r;
		cin >> x >> l >> r;
		if(x==1){
			int pos;
			char c;
			cin >> pos >> c;
			
			vs.[s[pos-1] - 'a'].erase(pos-1);
			
		}

	}
}