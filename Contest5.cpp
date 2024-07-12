#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[100005], b[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin>> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<int> save;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i] == a[j]){
                save.push_back(a[i]);
                break;
            }
        }
    }
    return 0;
}