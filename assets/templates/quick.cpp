#include <bits/stdc++.h>
using namespace std;

#define DD(x) clog << ">>> " << #x << " : " << x << endl
typedef long long ll;
ll const MOD = 1e9 + 7;
ll const N = 200005;
ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (a * b / gcd(a, b)); }
ll max(ll a, ll b) { return (a > b ? a : b); }
ll min(ll a, ll b) { return (a < b ? a : b); }
ll power(ll a, ll b, ll m = MOD) { return (b == 0 ? 1 : (b == 1 ? a : (b % 2 ? ((((power(a, b / 2, m) * power(a, b / 2, m)) % m) * a) % m) : (((power(a, b / 2, m) * power(a, b / 2, m)) % m) % m)))); }

int solve()
{

    return 0;
}

int main()
{
    ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}

/*
? Time Stamp:
-------------
    * Start:
    * Read:
    * Think:
    * Code:
    * Debug:
*/
