/******************************

    @author:  AhmadMhdYones
    @title:   ACM - POJ - 2136
    @date:    6th - June - 2019

*******************************/
#include <iostream>
#include <algorithm>

using namespace std;

char c;
int a[26];

int main ()
{
     ios::sync_with_stdio(false);
     for (int i = 0; i < 26; i++)
          a[i] = 0;
     while (cin >> c)
          if (isalpha(c))
               a[c-'A']++;
     for (int i = *max_element(a,a+26); i > 0; i--) {
          for (int j = 0; j < 26; j++)
               if (a[j] >= i)
                    cout << (j==25?"*":"* ");
               else
                    cout << (j==25?" ":"  ");
          cout << endl;
     }
     for (char j = 'A'; j <= 'Z'; j++)
          cout << j << (j!='Z'?" ":"\n");

     return 0;
}
