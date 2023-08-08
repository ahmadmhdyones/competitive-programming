/******************************

	@author:	ahmadmhdyones
	@date:		Wed__07_Jul_2021
	@title:		10004 UVa - Bicoloring
	@link:		https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=945

	@submit:	#1
	@read:		-
	@think:		-
	@code:		-
	@debug:		-
	@total:		-
	@self:		YES
	@level:		2/10
	@category:	DFS

******************************/
#include <bits/stdc++.h>

using namespace std;

vector< vector<int> > adj;
vector<int> vis;

bool dfs(int par, int chi) {
	vis[chi] = !vis[par];

	for (auto i : adj[chi]) {
		if (vis[i] == -1)
			return dfs(chi, i);
		else if (vis[chi] == vis[i])
			return true;
	}

	return false;
}

int solve()
{
	int n, m, a, b;
	while (cin >> n && n != 0) {
		adj = vector< vector<int> >(n);
		vis = vector<int>(n, -1);
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			adj[a].push_back(b), adj[b].push_back(a);
		}

		vis[0] = 1;
		cout << (!dfs(0, adj[0][0]) ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
	}

	return 0;
}

int main()
{
	ios::sync_with_stdio(NULL); cout.tie(NULL); cin.tie(NULL);

	int t = 1;
	while (t--) solve();

	return 0;
}
