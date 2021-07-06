#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dx[] = { 0, 0, -1 };
int dy[] = { -1, +1, 0 };
string dir[] = { "left ", "right ", "forth " };
string path = "IEHOVA#";
vector<vector<bool> > vis;
vector<string> s;

string dfs(int x, int y, string ans, int step) {
	vis[x][y] = true;

	if (s[x][y] == '#')
		return ans;

	for (int i = 0; i < 3; i++) {
		int tox = x + dx[i];
		int toy = y + dy[i];

		if (s[tox][toy] == path[step] && !vis[tox][toy])
			return dfs(tox, toy, ans + dir[i], step + 1);
	}

	return "";
}

int solve()
{
	int n, m;
	cin >> n >> m;
	vis = vector< vector<bool> >(n, vector<bool>(m, 0));
	s = vector<string>(n);
	for (auto& t : s) cin >> t, t = t + " ", t = " " + t;
	for (int j = 1; j <= m; j++)
		if (s[n - 1][j] == '@') {
			string ans = dfs(n - 1, j, "", 0);
			ans.pop_back();
			cout << ans << endl;
		}

	return 0;
}

int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();

	return 0;
}
