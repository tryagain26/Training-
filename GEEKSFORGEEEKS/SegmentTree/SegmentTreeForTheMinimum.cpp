#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)


struct SegmentTree{
	vector<int> v;
	int size;


	void init(int n){
		size = 1;
		while(size < n){
			size*= 2;
		}
		v.assign(2*size, 0);
	}
	void set(int i, int o, int x, int lx, int rx){
		if(rx-lx==1){
			v[x] = o;
			return; 
		}
		int m = (lx+rx)/2;
		if(i < m){
			set(i, o, 2*x + 1, lx, m);
		}else{
			set(i, o, 2*x + 2, m, rx);
		}
		v[x] = min(v[2*x +1], v[2*x + 2]);
	}
	void set(int i, int v){
		set(i, v, 0, 0, size);
	}
	int minn(int l, int r,int x, int lx, int rx){
		if(lx >= r || l >= rx){
			return INT_MAX;
		}
		if(lx>= l && rx <= r){
			return v[x];
		}
		int m = (lx + rx)/2;
		int m1 = minn(l, r, 2*x+1, lx, m);
		int m2 = minn(l, r, 2*x + 2, m, rx);
		return min(m1, m2);
	}
	int minn(int l, int r){
		return minn(l, r, 0, 0, size);
	}
	
};
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	SegmentTree st;
	st.init(n);
	rep(i, 0, n){
		int v;
		cin >> v;
		st.set(i, v);
	}
	while(m--){
		int op;
		cin >> op;
		
		if(op == 1){
			int i, v;
			cin >> i >> v;
			st.set(i, v);
			
		}else{
			int l, r;
			cin >> l >> r;
			cout << st.minn(l,r) << "\n";
		}
		st.display();

	}
	
	return 0;
}