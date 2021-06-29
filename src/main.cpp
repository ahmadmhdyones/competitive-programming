#include <bits/stdc++.h>

using namespace std;

#define SIZE(v)  ((int)((v).size()))
#define ALL(x) 	 x.begin(), x.end()
#define RALL(x)  x.rbegin(), x.rend()
#define SORT(x)  sort(ALL(x))
#define READ(x)  freopen(x, "r", stdin)
#define WRITE(x) freopen(x, "w", stdout)
#define DCM(a) 	 cout << setprecision(a) << fixed
#define PP(x) 	 ">>> " << #x << " : " << x << endl
#define DD(x) 	 clog << PP(x)

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef unsigned int ui;
typedef unsigned long long ul;

ld const PI = acos(-1.0L); //3.1415926535897932385
ll const MOD = 1e9 + 7;    //1000000007
ld const EPS = (1e-7);     //0.0000001
ll const N = 200005;       //(2 * 10^5) + 5

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
	ios::sync_with_stdio(NULL); cout.tie(NULL); cin.tie(NULL);

	int t = 1;
	// cin >> t;
	while (t--) solve();

	return 0;
}

/* Time Stamp:
- Start
- Read
- Think
- Code
- Debug
*/
