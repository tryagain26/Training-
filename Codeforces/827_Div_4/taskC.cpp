#include <bits/stdc++.h>
using namespace std;
const int N = 8;
char board[N][N];
void sol(){

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cin >> board[i][j];
			
		}
	}
	string s=  "";
	for(int i = 0; i < 8;i ++){
		s = "";
		for(int j = 0; j < 8; j++){
			s+= board[i][j];
		}
		if(count(s.begin(), s.end(), 'R') == 8){
			cout << "R\n";
			return ;
		}else{
			continue;
		}
	}
	s = "";
	for(int j = 0; j < 8; j++){
		s = "";
		for(int i = 0; i < 8; i++){
			s+= board[i][j];
		}
		if(count(s.begin(), s.end(), 'B') == 8){
			cout << "B\n";
			return ;
		}else{
			continue;
		}
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

}