#include <bits/stdc++.h>
using namespace std;


void sol(){
	int n, m;
	cin >> n >> m;
	if((n+m)%2 == 0){
		cout << "Tonya\n";
		return ;
	}else{
		cout << "Burenka\n";
		return;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	
	int t;
	cin >> t;
	while(t--){
		sol();
	}
	return 0;


}