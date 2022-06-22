#include <bits/stdc++.h>
using namespace std;

/*
 ? Integer Operations:
*/
int int_ceil(int a, int b)
{
    return (a + b - 1) / b;
}
int int_round(int a, int b)
{
    if (a > 0)
        return (a + b / 2) / b;
    if (a < 0)
        return (a - b / 2) / b;
}

/*
 * value	round	floor	ceil	trunc
 * *****	*****	*****	****	*****
 | +2.3		+2.0	+2.0	+3.0	+2.0
 | +3.8		+4.0	+3.0	+4.0	+3.0
 | +5.5		+6.0	+5.0	+6.0	+5.0
 | -2.3		-2.0	-3.0	-2.0	-2.0
 | -3.8		-4.0	-4.0	-3.0	-3.0
 | -5.5		-6.0	-6.0	-5.0	-5.0
*/


/*
 ? To round to multiple of a specified amount:
*/
int round_to(double x, double m)
{
    return round(x / m) * m;
}
