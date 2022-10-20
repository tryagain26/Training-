#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int A[N], B[N], C[N];

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
	void set(int i, int o){
		set(i, o, 0, 0, size);
	}
	int minn(int l, int r,int x, int lx, int rx){
		if(lx >= r || l >= rx){
			return 2e9;
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



int bSearch(int A[], int n, int x){
	int l =1, r= n;
	while(l < r){
		int m = (l+r)/2;
		if(A[m] < x){
			l = m+1;
		}else{
			r = m;
		}
	}
	if(A[l] < x){
		return -1;
	}
	return l;
}
int bSearch1(int A[], int n, int x){
	int l = 1, r= n; 
	while(l < r){
		int m = l + (r-l + 1)/2;
		if(A[m] < x){
			l=m;
		}else{
			r = m-1;
		}
	}
	if(A[l] > x){
		return -1;
	}
	return l;

}

int main(){
	

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, m, k;
	cin >> m >> n >> k;
	for(int i = 1; i <= m; i++){
		cin >> A[i];
	}
	for(int i = 1; i <= n; i++){
		cin >> B[i];
	}
	sort(B+1, B+n+1);
	int minn = 2e9;
	int three, four;
	for(int i = 1; i <= m; i++){
		minn = 2e9;
		int one = bSearch(B, n, A[i]);
		int two = bSearch1(B, n, A[i]);
		if(one == -1){
			three = A[i]-B[n];
		}else{
			three = abs(A[i]-B[one]);
		}
		if(two == -1){
			four = abs(A[i]-B[1]);
		}else{
			four = abs(A[i]-B[two]);
		}

		minn = min(minn, min(three, four));
		C[i] = minn;
	}

	

	SegmentTree st;
	st.init(m);
	int val;
	for(int i = 0; i < m; i++){
		val = C[i+1];
		st.set(i, val);
	}

	int l, r;
	
	while(k--){

		cin >> l >> r;
		l--;
	

		cout << st.minn(l, r) << " \n";
	}
		
	
	
	
	return 0;
}
