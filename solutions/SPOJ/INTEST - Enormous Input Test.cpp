/******************************

	@author:  AhmadMhdYones
	@title:   ACM - SPOJ - INTEST
	@date:    6th - June - 2019

*******************************/
#include <cstdio>

using namespace std;

int n, k, ans, a;

int main()
{
	scanf("%d%d", &n, &k);
	while (n--) {
		scanf("%d", &a);
		if (a % k == 0) ans++;
	}
	printf("%d\n", ans);

	return 0;
}
