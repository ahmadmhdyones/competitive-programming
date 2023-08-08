/******************************

	@author:  AhmadMhdYones
	@title:   ACM - POJ - 1922
	@date:    7th - June - 2019

*******************************/
#include <iostream>
#include <cmath>

using namespace std;

int n, v;
long double ans, t;

int main()
{
	ios::sync_with_stdio(false);
	while (cin >> n && n != 0) {
		ans = 1e9;
		while (n--) {
			cin >> v >> t;
			if (t < 0) continue;
			t += ceil(4500.0 * 3.6 / (v * 1.0));
			ans = min(ans, t);
		}
		cout << ans << endl;
	}

	return 0;
}
