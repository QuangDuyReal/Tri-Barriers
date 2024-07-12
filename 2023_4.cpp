#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int n;
vector<int> res;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout .tie(NULL);
    cin >> n;
    map<int,int> mp;
    vector<pair<int,int>> a(n);
    for(int i = 1; i <= n; i++){
        cin >> a[i].first >> a[i].second;
        res.push_back(a[i].first);
    }
 
    sort(res.begin(), res.end());

    for(int i = 0; i < res.size(); i++) mp[res[i]]++;

    vector<int> kq;
    for(int i = 0; i < res.size(); i++){
        if(mp[res[i]] >= 1){
            kq.push_back(res[i]);
        }
    }

    int dem = 1;
    for(int i = 0; i < kq.size() - 1; i++){
        if(kq[i] < kq[i + 1] && kq[i] + 1 == kq[i + 1]) dem++;
    }
    
    cout << dem;
    return 0;
}