#include <bits/stdc++.h>
using namespace std;
int ok[100];
char cv(string n){
	int x = stoi(n);
	char c = 'a';
	if(x%10 == 0){
		x=x/10;
		
	}
	c+= (x-1);
	return c;
	
	
}

void sol(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	string temp = "";
	memset(ok, 1, sizeof(ok));

	for(int i = 0; i < n; i++){
		if(s[i] == '0'){
			ok[i] = 0;
		}
	}
	//1110 
	vector<char> v;
	for(int i = n-1; i > 0; i--){
		temp = "";
		if(ok[i]==0){
			temp += s[i];
			temp += s[i+1];
			temp += s[i+2];
			
			v.push_back(cv(temp));
			i-= 2;
		}else{
			if(ok[i-1] + ok[i-2] == 2){
				temp += s[i];
				v.push_back(cv(temp));
			}
		}
	}
	for(auto &x:v){
		cout << x << " ";
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int q;
	cin >> q;
	while(q--){
		sol();

	}
	return 0;
}