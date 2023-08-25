// https://codeforces.com/problemset/problem/1862/D

#include <bits/stdc++.h>
using namespace std;

long long c(long long x) { return (x * (x - 1) / 2); }

pair<long long, long long> binarySearch(long long l, long long r, long long x)
{
    if (r >= l) {
        long long mid = l + (r - l) / 2;
        long long value = c(mid);
        // cout << "value = " << value << ", mid = " << mid << endl;

        if (value >= x) return binarySearch(l, mid - 1, x);
        return binarySearch(mid + 1, r, x);
    }
    else return { r, l };
}

int solve()
{
    long long n; cin >> n;
    pair<long long, long long> p = binarySearch(1, 1e10, n);
    long long v = c(p.first), vv = c(p.second);
    if (n - v < vv - n) cout << p.first + n - v << endl;
    else cout << p.second - (vv - n) << " ";
    cout << p.first << " " << p.second << endl;

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}


/*
? Time Stamp:
-------------
    * Start:
    * Read:
    * Think:
    * Code:
    * Debug:
*/
