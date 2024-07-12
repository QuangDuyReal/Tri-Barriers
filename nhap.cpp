#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

void toigian(int a, int b){
    int ucln = gcd(a,b);
    a = a / ucln;
    b = b / ucln;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout .tie(NULL);
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    int bcnn = lcm(a[0].second, a[1].second);

    int tong = a[0].first * (bcnn / a[0].second) + a[1].first * (bcnn / a[1].second);
    cout << tong << " " << bcnn << endl;
    for(int i = 2; i < n; i++){
        bcnn = lcm(bcnn, a[i].second);
        tong += a[i].first * (bcnn / a[i].second);
        cout << tong << " " << bcnn << endl;
    }
    int ucln = gcd(tong, bcnn);
    tong = tong / ucln;
    bcnn = bcnn / ucln;
    cout << tong << " " << bcnn;
    return 0;
}