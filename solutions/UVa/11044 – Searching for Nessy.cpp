/******************************

    @author:  AhmadMhdYones
    @title:   ACM - UVa - 11044
    @date:    6th - June - 2019

*******************************/
#include <iostream>

using namespace std;

int t, n, m;

int main ()
{
     cin >> t;
     while (t--) {
          cin >> n >> m;
          cout << n/3 * m/3 << endl;
     }

     return 0;
}
