#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long l, r; cin >> l >> r;
    vector<long long> res;
    for(long long i = l; i <= r; i++){
        int dem = 0;
        long long so = i;
        for(long long j = 2; j <= so; i++){
            if(so == 1) break;
            so /= j;
            dem++;
        }
        res.push_back(dem);
    }
    cout << *max_element(res.begin(), res.end());
    return 0;
}