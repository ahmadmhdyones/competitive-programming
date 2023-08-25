/************************************
    @author:    amy
    @title:     Codeforces Round #712 (Div. 2)
    @date:      Sat__03_Apr_2021___17_47_39
************************************/
#include <bits/stdc++.h>
using namespace std;

#define endl        '\n'
#define fr          first
#define sc          second
#define PB(x)       push_back(x)
#define MP(x, y)    make_pair(x, y)
#define sz(v)       ((int)((v).size()))
#define ALL(x)      x.begin(), x.end()
#define RALL(x)     x.rbegin(), x.rend()
#define SORT(x)     sort(ALL(x))
#define READ(x)     freopen(x, "r", stdin)
#define WRITE(x)    freopen(x, "w", stdout)
#define CLEAR(a)    memset(a, 0, sizeof(a))
#define FILL(a)     fill(a, a + 1000000, true)
#define DCM(a)      cout << setprecision(a) <<fixed
#define rep(n)      for (ll i = 0; i < n; i++)
#define repi(a, n)  for (ll i = a; i < n; i++)
#define repr(a, n)  for (ll i = a; i > n; i--)
#define PP(x)        ">>> " << #x << " : " << x << endl
#define C(x)        cout << PP(x)
#define CC(x)       clog << PP(x)

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef unsigned int ui;
typedef unsigned long long ull;

ll const N = 200005;
ld const EPS = (1e-7);
ll const MOD = 1e9 + 7;
ld const PI = acos(-1.0L); //3.1415926535897932385
ll GCD(ll a, ll b) { return (b == 0 ? a : GCD(b, a % b)); }
ll LCM(ll a, ll b) { return (a * b / GCD(a, b)); }
ll POW(ll a, ll b) { return (b == 0 ? 1 : (!b & 1 ? POW(a, b / 2) * POW(a, b / 2) % MOD : POW(a, b - 1) * (a % MOD) % MOD)); }
ll DCMP(ld x, ld y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1; }
ll CEIL(ll x, ll y) { return (x + y - 1) / y; }

ll TC = 1, n, m, ans, res, sum, mx, mn, a, b, c, d, x, y, z, k, l, r, q, u, v, p;
int A[N], B[N], C[N], D[N], L[N], R[N], X[N], Y[N], Q[N];
string S[N], s, T[N], t;
bool F[N], f;
set<int> st;
vii P(N);
vi V(N);

int main()
{
    ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
    cin >> TC;
    while (TC--) {

    }
    return 0;
}
