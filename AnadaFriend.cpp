#include <bits/stdc++.h>
using namespace std;

struct comp
{
    template<typename T>
    bool operator()(const T &l, const T &r) const
    {
        if (l.second != r.second) {
            return l.second < r.second;
        }
 
        return l.first < r.first;
    }
};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int q, k;
	cin >> q >> k;
	map<string, long long> m;
	while(q--){
		string s;
		int x;
		
		cin >> s >> x;
		m[s] += x;
	
	
	}
	vector<long long> v;
	for(auto itr = m.begin(); itr != m.end(); itr++){
		v.push_back(itr->second);
	}
	long long sum = 0;
	sort(v.begin(), v.end());
	int cnt = 0;
	for(int i = (int)v.size()-1; i>= 0; i--){
		cnt++;
		sum += v[i];
		if(cnt == k){
			break;
		}
	}

	cout << sum;
	return 0;
}