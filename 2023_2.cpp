#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, w[25];
int bit[25];
vector<int> res;

void xuli(){
    int dolech = 0;
    int tong = 0;
    int tongconlai = 0;
    for(int i = 1; i <= n; i++){
        if(bit[i] == 1){
            tong += w[i];
        }else if(bit[i] == 0){
            tongconlai += w[i];
        }
    }
    dolech = abs(tongconlai - tong);
    res.push_back(dolech);
}

void nhiphan(int i, int n){
    for(int j = 0; j <= 1; j++){
        bit[i] = j;
        if(i == n) xuli();
        else nhiphan(i + 1, n);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout .tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> w[i];
    nhiphan(1, n);
    cout << *min_element(res.begin(),res.end());
    return 0;
}