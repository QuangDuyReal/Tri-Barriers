#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout .tie(NULL);
    string s; cin >> s;
    
    string s1 = "QWERTYUIOP";
    string s2 = "ASDFGHJKL";
    string s3 = "ZXCVBNM";
    bool tim = *find(s1.begin(), s1.end(), s[0]);
    int index = 0;
    if(tim){
        index = 1;
    }else{
        tim = *find(s2.begin(), s2.end(), s[0]);
        if(tim){
            index = 2;
        }else{
            index = 3;
        }
    } 
    int dem = 0;
    int temp = index;
    for(int i = 1; i < s.size(); i++){
        tim = *find(s1.begin(), s1.end(), s[i]);
        if(tim){
            index = 1;
            if(index != temp) dem++; 
        }else{
            tim = *find(s2.begin(), s2.end(), s[i]);
            if(tim){
                index = 2;
                if(index != temp) dem++;
            }else{
                index = 3;
                if(index != temp) dem++;
            }
        }
        temp = index;
    }   
    cout << dem;
    return 0;
}