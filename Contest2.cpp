#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[1000003];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    int ai = INT_MIN, aj = INT_MAX, ak = INT_MIN;
    int index;

    for(int i = 2; i <= n - 1; i++){
        if(a[i] < aj){
            aj = a[i];
            index = i;
        }
    }

    for(int i = 1; i < index; i++){
        ai = max(ai, a[i]);
    }

    for(int i = index + 1; i <= n; i++){
        ak = max(ak,a[i]);
    }
    cout << ai - aj + ak;
    
    return 0;
}