#include<bits/stdc++.h>
using namespace std;

void initialize()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);

    vector<int> v2(5);      // with 5 elements equal to 0 by default
    vector<int> v3(5, 10);  // with 5 elements equal to 10

    vector<int> v4{ 1, 2, 0, 0, 5 }; // like array

    int arr[] = { 10, 20, 30 }, n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v5(arr, arr + n);           // specific range of array
    vector<int> v5(v5.begin(), v5.end());   // specific range of vector

    vector<int> v7(10);
    fill(v7.begin(), v7.end(), 10);

    vector<string> s1{ "Hello", "World!" };
    vector<string> s2{ "a", "b", "c" };

    // 2D vector
    vector<vector<int>> vv1{ {1,2,3}, {4, 5, 6}, {7, 8, 9} };
    vector<vector<int>> vv2(
        5,                  // number of rows vectors
        vector<int>(5, -1)  // (number of columns, filled with -1)
    );
}
