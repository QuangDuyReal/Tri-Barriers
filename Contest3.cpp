#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[1003][1003];
int Prime[1003][1003];

bool isPrime(int a){
    if(a < 2) return false;
    for(int i = 2; i*i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    pair<int,int> save;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }

    memset(Prime, 0, sizeof(Prime));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(isPrime(a[i][j])) Prime[i][j] = 1;
        }
    }

    for(int i = 0; i < m; i++){
        int dem = 0;
        for(int j = 0; j < n; j++){
            if(Prime[i][j] == 1){
                dem++;
            }
        }
        if(dem >= 2){

        }
    }
    return 0;
}