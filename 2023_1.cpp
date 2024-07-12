#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
    int a, b, c, d, e, f, g, h, k;
    cin >> a >> b >> c >> d >> e >> f;
    g = a + d;
    int bcnn = lcm(c,f);
    b = (bcnn / c)*b;
    e = (bcnn / f)*e;
    c = f = bcnn;
    h = b + e;
    k = bcnn;
    if(h > k){
        g += int(h / k);
        h = h % k;
    }
    int ucln = gcd(h,k);
    h = h / ucln;
    k = k / ucln;
    if(h == 1 && k == 1){
        cout << g + 1;
    }else cout << g << " " << h << " " << k;
    return 0;
}