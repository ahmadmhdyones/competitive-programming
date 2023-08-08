/******************************

	@author:  AhmadMhdYones
	@title:   ACM - POJ - 1007
	@date:    6th - June - 2019

*******************************/
#include <iostream>
#include <cstdlib>

using namespace std;

struct sortedness {
	char s[51];
	int f;
} a[100];
int n, m;
int compare(const void* x, const void* y) {
	return ((sortedness*)x)->f - ((sortedness*)y)->f;
}

int main()
{
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i].s;
		a[i].f = 0;
		for (int j = 0; j < n - 1; j++)
			for (int k = j + 1; k < n; k++)
				a[i].f += (a[i].s[j] > a[i].s[k]);
	}
	qsort(a, m, sizeof(sortedness), compare);
	for (int i = 0; i < m; i++)
		cout << a[i].s << endl;

	return 0;
}
