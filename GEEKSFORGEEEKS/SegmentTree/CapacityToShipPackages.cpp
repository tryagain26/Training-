#include <bits/stdc++.h>
using namespace std;


bool check(int capicity, const vector<int>& weights, int days){
	int current_weight = 0;
	days--;
	for(int i = 0; i < weights.size(); i++){
		if(current_weight + weights[i] <= capicity){
			current_weight+= weights[i];
		}else{
			days--;
			current_weight = weights[i];
		}
	}
	return days >= 0;

}
int shipWithinDays(const vector<int>& weights, int days){
	int l= 0, r = 0;
	for(int i= 0; i < weights.size(); i++){
		l = max(weights[i], l);
		r += weights[i];
	}
	while(l < r){
		int m = l + (r-l)/2;
		if (check(mid, weights, days)){
			
			
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	return 0;
}
