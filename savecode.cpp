#include<bits/stdc++.h>
using namespace std;

//bignum
//cong
string str_plus(string a, string b){
	int n = max(a.size(), b.size());
	while (a.size()<n) a.insert(0, "0");
	while (b.size()<n) b.insert(0, "0");
	int res, tmp; res = 0;
	string c;
	for (int i = n-1; i >= 0; i--){
		tmp = (a[i]-'0')+(b[i]-'0')+res;
		res = tmp/10;
		c += char(tmp%10+'0');
	}
	if (res!=0) c += char(res+'0');
	reverse(c.begin(), c.end());
	return c;
}
//tru
string str_subtrac(string a, string b){
    string calc = "";
    int n = max(a.size(), b.size());
    while (a.size() < n) a.insert(a.begin(), '0');
    while (b.size() < n) b.insert(b.begin(), '0');
    string sign;
    int res = 0, up, subtrac;
    if (a < b){
        swap(a, b); sign = "-"; 
    } else sign = "";
    for (int i = n-1; i > 0; i--){
        up = (a[i] + res < b[i])?(1):(0);
        subtrac = (int(a[i])-48+res + up*10) - (int(b[i])-48); 
        calc = char(subtrac + '0') + calc;
        if (up == 1) res = -1; else res = 0;
    }
    up = (a[0]+res < b[0])?(1):(0);
    subtrac = (int(a[0])-48+res + up*10) - (int(b[0])-48); 
    calc = char(subtrac + '0') + calc;
    while (calc.size() > 1 && calc[0] == '0') calc.erase(calc.begin());
    calc = sign + calc;
    return calc;
}

//nhan
string str_multi(string one, string two){
    int a = one.size();
    int b = two.size();
    int m = max(a, b);
    vector<string> multi(1005);
    string plus, infront;
    int res, temp;
    for (int i = b - 1; i >= 0; i--){
        plus = "";
        res = 0;
        for (int j = a - 1; j >= 0; j--){
            temp = (two[i] - 48) * (one[j] - 48) + res;
            plus += char(temp % 10 + 48);
            res = temp / 10;
        }
        if (res != 0 || plus.empty())
            plus += char(res + 48);
        reverse(plus.begin(), plus.end());
        multi[b - i - 1] = plus;
    }
    for (int i = 0; i < b; i++){
        for (int j = 0; j < i; j++){
            multi[i].push_back('0');
        }
    }
    int psize = multi[b - 1].size();
    for (int i = 0; i < b; i++){
        while (multi[i].size() < psize)
            multi[i].insert(0, "0");
    }
    string out = "";
    res = 0;
    for (int j = psize - 1; j >= 0; j--){
        temp = 0;
        for (int i = 0; i < b; i++){
            temp += (multi[i][j] - 48);
        }
        temp += res;
        out += char(temp % 10 + 48);
        res = temp / 10;
    }
    if (res != 0 || out.empty())
        out += char(res + 48);
    reverse(out.begin(), out.end());
    while (out[0] == '0' && out.size() > 1)
        out.erase(0, 1);
    return out;
}

//kiem tra so nguyen to
bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

//Sang Eratosthenes
void sieve(int N) {
    bool isPrime[N+1];
    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
}

//////////////////////////////////////////////////////////////////

//sinh hoan vi
// signed main(){

//     int n; cin >> n;
//     vector<int> inp(n);
//     for (int i = 0; i < n; i++) inp[i] = i+1;

//     do{
//         for (auto &it:inp) cout << it << " ";
//         cout << endl;
//     }while(next_permutation(inp.begin(), inp.end()));

//     return 0;
// }

//////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////
//sinh nhi phan
// int bit[25];

// void output(int n){
//     for (int i = 1; i <= n; i++) cout << bit[i] << " ";
//     cout << endl;
// }
// void gen_bina(int n, int k){
//     for (int i = 0; i < 2; i++){
//         bit[k] = i;
//         if (n == k) output(n);
//         else gen_bina(n, k+1);
//     }
// }

// int main(){

//     int n; cin >> n;
//     gen_bina(n, 1);

//     return 0;
// }
//////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////
//tinh so fibo
// #include <bits/stdc++.h>
// #define endl '\n'
// #define maxfibo 10000

// using namespace std;

// string ADD(string a, string b){
//       int len = max((int)a.size(), (int)b.size());
//       while (a.size() < len) a = "0" + a;
//       while (b.size() < len) b = "0" + b;
//       string res = "";
//       int carry = 0;
//       for(int i = len - 1; i >= 0; i--){
//             int temp = (a[i] - '0') + (b[i] - '0') + carry;
//             int dv = temp % 10;
//             carry = temp / 10;
//             res.push_back(dv + '0');
//       }
//       if (carry != 0) res.push_back(carry + '0');
//       reverse(res.begin(), res.end());
//       return res;
// }

// int main(){

// 	vector<string> fibo(maxfibo + 5);
// 	fibo[0] = fibo[1] = "1";
// 	for (int i = 2; i <= maxfibo; i++){
// 		fibo[i] = ADD(fibo[i-1], fibo[i-2]);
// 	}

// 	int test; cin >> test;
//     while (test--){
//         int n; cin >> n;
//         cout << fibo[n] << endl;
//     }
// 	return 0;
// }
//////////////////////////////////////////////////////////////////


