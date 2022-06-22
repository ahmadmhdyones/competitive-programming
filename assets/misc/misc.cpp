#include <bits/stdc++.h>
using namespace std;

string convert_decimal_to_num_base(long long decimal, long long base)
{
    string res = "";
    while (decimal) {
        res = (char)((decimal % base) + '0') + res;
        decimal /= base;
    }
    return res;
}


long long convert_decimal_to_str_base(long long decimal, long long base)
{
    long long res = 0, x = 1;
    while (decimal) {
        res += (decimal % base) * x;
        decimal /= base;
        x *= 10;
    }
    return res;
}
