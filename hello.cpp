#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &x : v){
        cin >> x;
    }
    partial_sum(v.begin(), v.end(), v.begin());
    
    return 0;
}