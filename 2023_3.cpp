#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[15][15];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout .tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    
    int u, r, d, l;
    u = 0;
    r = n - 1;
    d = n - 1;
    l = 0;
    vector<int> res;
    while(d >= u && r >= l){
        int lon = INT_MIN;
        for(int i = u; i <= d; i++){
            lon = max(lon, max(abs(a[i][l]), abs(a[i][r])));
        }
        for(int i = l + 1; i < r; i++){
            lon = max(lon, max(abs(a[u][i]), abs(a[d][i])));
        }
        res.push_back(lon);
        u++; l++;
        r--; d--;
    }
    int index = 0, jndex = 0;
    for(int i = 0; i < res.size(); i++){
        if(a[index][jndex] < 0){
            res[i] *= -1;
        }
        index++; jndex++;
    }
    int dist = INT_MIN;
    for(int i = 0; i < res.size() - 1; i++){
        dist = max(dist, abs(res[i] - res[i + 1]));
    }
    cout << dist;
    return 0;
}