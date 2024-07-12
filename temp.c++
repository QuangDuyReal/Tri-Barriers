// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf 1e18
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, x; cin >> n >> x;
    vector<int> child(n);
    for (auto &it:child) cin >> it;
    sort(child.begin(), child.end());
    int seats = 0;
    int i = 0, j = n-1;
    while (i < j){
        if (child[i] + child[j] <= x){
            seats++;
            i++; j--;
        }else{
            seats++; j--;
        }
    }
    if (i == j) seats++;
    cout << seats << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}