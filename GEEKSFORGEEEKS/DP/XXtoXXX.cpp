#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
void progress(string s, vector<pair<char,int>> &vp){
	int cnt = 1;
	rep(i, 1, (int)s.size()){
		if(s[i] != s[i-1]){
			vp.push_back({s[i-1], cnt});
			cnt = 0;
		}
		cnt++;
	}
	vp.push_back({s.back(), cnt});

}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s, t;
	cin >> s >> t;
	vector<pair<char, int>> Svp, Tvp;
	progress(s, Svp);
	progress(t, Tvp);

	bool ans = true;
	if(Svp.size() != Tvp.size()){
		cout << "NO";
		return 0;
	}else{
		
		rep(i, 0, (int)Svp.size()){
			if(Svp[i].first != Tvp[i].first){
				ans = false;
				
			}
			if(!(Svp[i].second == Tvp[i].second || Svp[i].second < Tvp[i].second && Svp[i].second >= 2)){
				ans = false;
				
			}
		}
	}
	if(ans){
		cout << "Yes";
	}else{

		cout << "No";
	}
	return 0;

}