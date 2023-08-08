/******************************

	@author:	ahmadmhdyones
	@date:		Sat__26_Jun_2021
	@title:		10110 UVa - Light, more light
	@link:		https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051

	@submit:	#2
	@read:		5min
	@think:		8min
	@code:		2min
	@debug:		2min
	@total:		17min
	@self:		NO
	@level:		1.5/10
	@category:	Number Theory

******************************/
#include <bits/stdc++.h>

using namespace std;

int solve()
{
	unsigned int n;
	while (cin >> n && n != 0) {
		int sq = sqrt(n);
		cout << (sq * sq == n ? "yes\n" : "no\n");
	}

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
