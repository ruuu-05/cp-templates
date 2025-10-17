#include <iostream>
#include <bits/stdc++.h>  


#define ee "\n"
#define ll long long
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()



using namespace std;

void fastio(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
}

const int N = 2e6 + 5, MOD = 1e9 + 7;
ll fact[N], inv[N], factInv[N];
 
void init() {
 
    fact[0] = 1;
    for (ll i = 1;i < N;i++) {
        fact[i] = ((fact[i - 1] % MOD) * (i % MOD)) % MOD;
    }
    inv[1] = 1;
    for (ll i = 2;i < N;i++) {
        inv[i] = (((MOD)-(MOD / i) % MOD) * (inv[MOD % i] % MOD)) % MOD;
    }
 
    factInv[0] = 1;
    for (ll i = 1;i < N;i++) {
        factInv[i] = ((factInv[i - 1] % MOD) * (inv[i] % MOD)) % MOD;
    }
}
 
ll P(ll n, ll r) { // n! / (n-r)!
    if (n < r) return 0;
    return fact[n] * factInv[n - r] % MOD;
}
 
ll C(ll n, ll r) {
    return P(n, r) * factInv[r] % MOD;
}

void ruuu() {


}
//s(0)=6,-->even
//s(1)=3-->odd
//s(2)=9+1
//s(3)=5
//s(4)=15+1
//s(5)=8
//s(6)=4
//s(7)=4
//s(8)=2
//s(9)=1
int main() {
    fastio();
    init();
int tc;//cin>>tc;
tc = 1;
while(tc--){

ruuu();

//cout<<P(89,85);
//cout<<nCr(200000,3);
 
}
  return 0;
 
}
// 