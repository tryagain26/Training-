#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        
    	int n, a, b;
    	cin >> n >> a >> b;
    	double ans = double(4.0 * n) / (double(3.14 * b + 4.0 * a));
    	cout << fixed << setprecision(1) << ans << "\n";
    }
	return 0;
}
