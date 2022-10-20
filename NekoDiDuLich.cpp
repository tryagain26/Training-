#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int minn = INT_MAX;
    int maxx = INT_MIN, pos, pos1;
    rep(i, 0, n){
        int x, y;
        cin >> x >> y;
        if(y < minn){
            minn = y;
            pos = i;
        }
        if(x>maxx){
            maxx = x;
            pos1 = i;
        }
    }
    if(minn < maxx){
        cout << "YES\n" << pos+1 << " " << pos1+1;
        return 0;
    }
    cout << "NO";


    return 0;
}
