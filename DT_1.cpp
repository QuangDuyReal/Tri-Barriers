#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout .tie(NULL);
    long long n; cin >> n;
    long long dem = 0;
    for(long long i = 1; i <= n; i++){
        if(n % i == 0) dem++;
    }
    cout << dem;
    return 0;
}