/******************************

	@author:	ahmadmhdyones
	@date:		Wed__07_Jul_2021
	@title:		122 UVa - Trees on the level
	@link:		https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=58

	@submit:	WA
	@read:		-
	@think:		-
	@code:		-
	@debug:		-
	@total:		-
	@self:		YES
	@level:		4/10
	@category:	DFS, BFS

******************************/
#include <bits/stdc++.h>

using namespace std;

int cur;
vector<int> ans;
set<string> uniq;
map<int, vector<int> > adj;
vector< pair<string, int> > v;

pair<string, int> getInput(string s) {
	string t = "";
	int i = 1;

	while (isdigit(s[i])) t += s[i], ++i;
	int num = stoi(t);

	i++, t = "";

	while (isalpha(s[i])) t += s[i], ++i;
	string path = t;

	return { t, num };
}

void dfs(int node) {
	if (cur == v.size()) return;

	for (int i = 0; i < 2; i++)
		if (
			v[node].first.size() + 1 == v[cur].first.size()
			&&
			v[node].first == v[cur].first.substr(0, v[cur].first.size() - 1)
			)
		{
			adj[node].push_back(cur);
			cur++;
			dfs(cur - 1);
		}
}
void bfs(int node) {
	queue<int> q;
	q.push(node);

	while (!q.empty()) {
		node = q.front();
		ans.push_back(v[node].second);

		for (auto i : adj[node]) {
			q.push(i);
		}
		q.pop();
	}
}

int solve()
{
	uniq.clear();
	ans.clear();
	adj.clear();
	v.clear();
	cur = 1;

	string s;
	while (cin >> s && s != "()") {
		pair<string, int> in = getInput(s);
		uniq.insert(in.first);
		v.push_back(in);
	}
	if (v.size() == 0) return 0; // if EOF reached, then exit

	sort(v.begin(), v.end());
	dfs(0);
	bfs(0);

	if (ans.size() != v.size() || uniq.size() != v.size() || !v[0].first.empty()) {
		cout << "not complete" << endl;
	}
	else {
		cout << ans[0];
		for (int i = 1; i < ans.size(); i++)
			cout << " " << ans[i];
		cout << endl;
	}

	return 0;
}

int main()
{
	ios::sync_with_stdio(NULL);	cout.tie(NULL);	cin.tie(NULL);

	int t = 1;
	while (t--) solve();

	return 0;
}
