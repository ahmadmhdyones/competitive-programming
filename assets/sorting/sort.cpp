#include<bits/stdc++.h>
using namespace std;

const int N = 100;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    /*
    * The comparator function returns true if the first argument should be placed before the second argument or not.
    ! You can customize the comparator function to be based on specific conditions (pair, value, ...).
    */

    return a.first < b.first;
}

void sort_vector_of_pair()
{
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (auto& i : v) cin >> i.first >> i.second;

    // Sort ascending order based on first
    sort(v.begin(), v.end());
    sort(v.begin(), v.begin() + v.size());

    // Sort descending order based on first
    sort(v.rbegin(), v.rend());
    sort(v.begin(), v.end(), greater<pair<int, int>>());

    // Sort ascending order based on second
    sort(v.begin(), v.end(), cmp);

    // Sort descending order based on second
    sort(v.begin(), v.end(),
        [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        }
    );
}

void sort_arr()
{
    int arr[N];
    string s[N];
    pair<int, int> p[N];

    sort(arr, arr + N);                         // sort ascending order
    sort(s, s + N, greater<string>());          // sort descending order
    sort(p, p + N, greater<pair<int, int>>());  // sort ascending order
}
