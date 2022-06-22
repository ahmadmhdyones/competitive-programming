#include <bits/stdc++.h>
using namespace std;

/*
 ? know # of digits:
 * log10(10x) = log10(10) + log10(x) = 1 + log10(x)

 @return:
    if x == 0, then it returns 0
    else, it returns the number of digits for x
*/
int num_digits(long long x)
{
    x = abs(x);
    return x ? 1 + floor(log10(x)) : 1;
}
