#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x;
	cin >> x;
	string s = "";
	if(x==0){
		cout << "00";
		return 0;
	}
	while(x>0){
		if(x%16 == 15){
			s += "F";
		}else if(x%16 == 14){
			s += "E";
		}else if(x%16 == 13){
			s+= "D";
		}else if(x%16 == 12){
			s+= "C";
		}else if(x%16 == 11){
			s+= "B";
		}else if(x%16 == 10){
			s+= "A";
		}else{
			s+= (x%16 + '0');
		}


		x =x /16;
	}


	if(s.length() == 1){
		s+= '0';
	}
	reverse(s.begin(), s.end());
	cout << s;
	return 0;

}