#include <bits/stdc++.h>
using namespace std;

long double EPS = 1e-10;

/**
 * EPS: is very small amount (e.g. 1e-10)
 * 	  : differ from problem to another
 * 	  : 0.0000001, 1e-10, ...
 *
 * @return:
 * 0 for: a == b
 * 1 for: a > b
 * -1 for: a < b
*/

int double_comp(double a, double b)
{
    // if very small difference, then equal
    if (fabs(a - b) <= EPS)
        return 0;
    return a < b ? -1 : 1;
}
