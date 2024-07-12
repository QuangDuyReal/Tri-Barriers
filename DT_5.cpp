#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int h[1003][1003];
int m, n;
int dx[] = {-1, -1 ,-1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

bool Amplitude(int i, int j){
    return i == 1 || i == m || j == 1 || j == n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n;
    int x, y; cin >> x >> y;
    int k; cin >> k;
    int visit[1003][1003];
    memset(visit, 0, sizeof(visit));
    queue<int> q;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++) cin >> h[i][j];
    }

    q.push(h[x][y]);
    for(int i = 0; i < 8; i++){
        int u = x + dx[i];
        int v = y + dy[i];
        if(u >= 1 && u <= m && v >= 1 && v <= n){
            if(visit[u][v] == 0){
                visit[u][v] = 1;
                q.push(h[u][v]);
            }
        }
    }
    return 0;
}