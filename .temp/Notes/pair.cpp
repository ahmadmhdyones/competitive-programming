/*

The pair container is a simple container defined in <utility> header consisting of two data elements or objects.
The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
pair (data_type1, data_type2) Pair_name;

*/

#include <bits/stdc++.h>
#include <iostream>
#include <utility>

using namespace std;

struct myStruct { string name; int age; };
int data[] = { 1, 2, 3, 4, 5, 6, 7 ,8 ,9 };

int main()
{
    // Declaration:
    pair <int, int> p1;
    pair <int, string> p2[10];
    pair <int, myStruct> p3;


    // Initialization:
    pair <int, int> p4(5, 6);
    pair <int, string> p5[3]{ {4,"four"}, {3,"three"}, {2,"two"} };
    pair <int, int> p6(p4), p7, p8, p9;
    p7 = make_pair(5, 7);
    p8 = { 9,0 };
    p9.first = 8;
    p9.second = 0;

    return 0;
}
