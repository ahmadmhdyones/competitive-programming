#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define SIZE(v) ((int)((v).size()))
#define ALL(x) x.begin(), x.end()
#define RALL(x) x.rbegin(), x.rend()
#define SORT(x) sort(ALL(x))
#define DCM(a) cout << setprecision(a) << fixed
#define PP(x) ">>> " << #x << " : " << x << endl
#define DD(x) clog << PP(x)

typedef long long ll;
typedef long double ld;
typedef unsigned int ui;
typedef pair<int, int> ii;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<double> vd;

ld const PI = acos(-1.0L);	//3.1415926535897932385
ll const MOD = 1e9 + 7;		//1,000,000,007
ld const EPS = (1e-7);		//0.0000001
ll const N = 200005;		//(2 * 10^5) + 5
ll const OO = 1e8;			//100,000,000

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
