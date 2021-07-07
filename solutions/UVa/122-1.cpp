/******************************

	@author:	ahmadmhdyones
	@date:		Tue__06_Jul_2021
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
	@category:	Sorting

******************************/
#include <bits/stdc++.h>

using namespace std;

#define ALL(x) x.begin(), x.end()

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

int solve()
{

	string s;
	set<string> uniqpaths;
	vector<string> allpaths;
	vector< pair<string, int> > input;
	while (cin >> s && s != "()") {
		pair<string, int> in = getInput(s);
		uniqpaths.insert(in.first);
		allpaths.push_back(in.first);
		input.push_back(in);
	}

	sort(ALL(input), [](const pair<string, int>& a, const pair<string, int>& b) {
		if (a.first.size() < b.first.size()) return true;
		else if (a.first.size() == b.first.size() && a.first <= b.first) return true;
		else return false;
		});

	string ans = "";
	bool flag = false;

	for (int i = 0; i < input.size(); i++) {
		string parent = input[i].first.substr(0, input[i].first.size() - 1);
		if (find(ALL(allpaths), parent) == allpaths.end())
			flag = true;
		else
			ans = ans + to_string(input[i].second) + " ";
	}

	if (flag || uniqpaths.size() != allpaths.size()) cout << "not complete" << endl;
	else ans.pop_back(), cout << ans << endl;

	return 0;
}

int main()
{
	ios::sync_with_stdio(NULL);	cout.tie(NULL);	cin.tie(NULL);

	while (!EOF) solve();

	return 0;
}
