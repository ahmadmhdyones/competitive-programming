/******************************

	@author:	ahmadmhdyones
	@date:		Fri__09_Jul_2021
	@title:		66A - Petya and Java
	@link:		https://codeforces.com/problemset/problem/66/A

	@submit:	AC
	@self:		YES
	@level:		2/10
	@category:	Implementation, Strings

******************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	try {
		if (stoll(s) <= 127) cout << "byte\n";
		else if (stoll(s) <= 32767) cout << "short\n";
		else if (stoll(s) <= 2147483647) cout << "int\n";
		else cout << "long\n";

	} catch (...) {
		cout << "BigInteger \n";
	}

	return 0;
}
