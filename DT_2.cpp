#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

long long n;
long long bit[25];

void in(){
    for(int i = 1; i <= n; i++) cout << bit[i] << " ";
    cout << endl;
}

void xuli(){
    int kq = 0;
    for(int i = 1; i <= n; i++){
        if(bit[1])
    }
}

void gen(int i){
    for(int j = 0; j < 2; j++){
        bit[i] = j;
        if(i == n) in();
        else gen(i + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout .tie(NULL);
    cin >> n;
    gen(1);
    return 0;
}