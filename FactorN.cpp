#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b, cnt;
	cin >> a >> b;
	long long one = 1, two = 1, product =1, sum = 0 ;
	for(int i = a; i <= b; i++){
		int tmp = i;
		one = 1, two =1, product = 1;
		for(int j = 2; j*j <= tmp; j++){
			
			while(tmp%j == 0){
				tmp=tmp/j;
				one = one * j;
				two += one;
			}
			product = product * two;
		}
		if(tmp >=2){
			product*=(1+tmp);
		}
		sum += abs(i- product+i);
		

	}
	cout << sum;
	return 0;
}