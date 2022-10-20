#include <bits/stdc++.h>
using namespace std;

void sol(){
		string s, ss;
		cin >> s >> ss;
		int n = s.length(), m = ss.length();
		int one, two ;
		
		if(s[n-1] == 'L'  && (ss[m-1] == 'L' )){
			if(n>m){
				cout << ">\n";
			}else if(n < m){
				cout << "<\n";
			}else{
				cout << "=\n";
			}
			return;
		}
		if(s[n-1] == 'S'  && (ss[m-1] == 'S' )){
			if(n<m){
				
				cout << ">\n";

			}else if(n > m){
				
				cout << "<\n";
			}else{
				
				cout << "=\n";
			}
			return;
		}
		
		if(s[n-1]=='L' ){
			one = 5;

		}else if(s[n-1] == 'S'){
			one = 0;
		}


		if(ss[m-1]=='L' ){
			two = 5;
		}else if(ss[m-1] == 'S' ){
			two = 0;
		}
		if(s=="M"){
			one = 3;
		}
		if(ss=="M"){
			two = 
		}

		if(one > two){
			cout << ">\n";

			return;
		}else if(one == two){
			cout << "=\n";
			return;
		}else{
			cout << "<\n";
			return;
		}



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