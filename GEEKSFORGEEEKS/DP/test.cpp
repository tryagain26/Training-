#include <bits/stdc++.h>
using namespace std;
char cv(string n){
	int x = stoi(n);
	char c = 'a';
	if(x%10 == 0){
		x=x/10;
		
	}
	c+= (x-1);
	return c;
	
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string c = "110";
	cout << cv(c);
}