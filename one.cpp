#include <bits/stdc++.h>
using namespace std;


#define rep(i, a, b) for(int i =a ; i < b; i++)
#define rep1(i, a, b) for(int i = a; i <= b; i++)
#define ll long long
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int q;
	cin >> q;
	ll sum = 0;
	multiset<ll> ml;
	while(q--){
		string s;
		int x;
		cin >> s >> x;
		if(s == "IN"){
			ml.insert(x);
		}
	}



	return 0;
}