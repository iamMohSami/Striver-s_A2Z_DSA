#include <bits/stdc++.h>
using namespace std;

int main()
{
    // STL : Standard Template Library

    // 1.PAIR

    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    pair<char, char> ch = {'a', 'b'};
    cout << ch.first << " " << ch.second << endl;

    pair<float, string> mix = {2.36, "KKR"};
    cout << mix.first << " " << mix.second << endl;

    // nested pairs
    // to store : 1,2,3 in pair
    pair<int, pair<int, int>> nest = {1, {2, 3}};
    cout << nest.first << endl;
    // cout << nest.second << endl;
    cout << nest.second.first << endl;
    cout << nest.second.second << endl;

    // pair arrays
    pair<int, int> arr[] = {{1, 2}, {3, 4}};
    cout << arr[0].first << endl;
    cout << arr[0].second << endl;
    cout << arr[1].first << endl;
    cout << arr[1].second << endl;

    return 0;
}