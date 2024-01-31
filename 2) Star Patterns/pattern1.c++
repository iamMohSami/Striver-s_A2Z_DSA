#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
     *   *   *   *   *
     *   *   *   *   *
     *   *   *   *   *
     *   *   *   *   *
     *   *   *   *   *       */

    int i = 3;
    while (i > 0)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*"
                 << "\t";
        }
        cout << "\n";
        i--;
    }
}