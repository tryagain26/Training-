#include <bits/stdc++.h>
using namespace std;

string s, m;
bool check(string t){
	int cnt = 0;
	int len = t.length();
	for(int i =1; i < len; i++){
		if(m[i] == t[i]){
			cnt++;
		}
	}

	if(cnt == len-2){
		return true;
	}
	return false;
}
int convert2(string t){
	int cnt = 0;
	for(int i =1; i < t.length(); i++){
		cnt = (cnt * 2 + (t[i]- '0'));
	}
	return cnt;
}


string convert3(int m){
	string res;
	while(m!=0){
		res += (m%3) + '0';
		m/=3;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	freopen("input.txt", "r", stdin);
	cin >> s >> m;
	s = ' ' + s;
	m = ' ' + m;
	for(int i = 1; i < s.length(); i++){
		if(s[i] == '1'){
			s[i] = '0';
			int res = convert2(s);
			string cv = convert3(res);
			if(check(cv)){
				cout << res;
				return 0;
			}
			s[i] = '1';

		}else{
			s[i] = '1';
			int res = convert2(s);
			string cv = convert3(res);
			if(check(cv)){
				cout << res;
				return 0;
			}
			s[i] = '0';
		}
	}



	return 0;
}