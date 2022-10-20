#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int a, b,c,d;
	cin >> a >> b;
	cin >> c >> d;
	int one = d-b;
	if(one%__gcd(a,c) != 0){
		cout << -1;
	}else{
		while(b!=d){
            if(b < d){
            	b+=a;
            }else{
            	d+=c;
            }
        }
		cout << d;	
	}

	
	return 0;

}