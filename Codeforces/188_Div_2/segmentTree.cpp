#include <bits/stdc++.h>
using namespace std;


struct segmentTree{
	int size;
	vector<int> v;
	void init(){
		size = 1;
		while(size <= n){
			size = size*2;
		}
		v.assign(size, 0);
	}
	void build(int i, int l, int r){
		if(l==r){
			v[i] = arr[l];
			return;
		}else{
			int m = (l+r)/2;

			build(2*i+1, l, mid);
			build(2*i+2, mid, r);
			v[i] = v[2*i + 1] + v[2*i + 2 ];
		}
	}


	}
	void update(){

	}


	
};
int main(){

}