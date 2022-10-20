#include <bits/stdc++.h>
using namespace std;

void update(int id, int l, int r, int i, int v){
	if(i < l || r< i){
		return;
	}
	if(l==r){
		ST[id] = v;
		return;
	}
	int mid = l + (r-l)/2;
	update(id*2, l, mid, i, v);
	update(id*2 + 1, mid+1, r, i, v);
	ST[id] = max(ST[id*2], ST[id*2 + 1]);
}
int main(){


}