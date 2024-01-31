#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Arrays store similar/homogeneous data and are mutable

    int arr[3] = {0, 1, 2};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    arr[0] = 48;
    cout << arr[0] << endl;

    // Array with string Datatype
    string para[2] = {"Visca", "Barca"};
    cout << para[0] << endl;
    cout << para[1] << endl;

    // 2-D arrays
    int matrix[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    cout << matrix[0][0] << endl;
    cout << matrix[0][1] << endl;
    cout << matrix[0][2] << endl;
    cout << matrix[1][0] << endl;
    cout << matrix[1][1] << endl;
    cout << matrix[1][2] << endl;
    cout << matrix[2][0] << endl;
    cout << matrix[2][1] << endl;
    cout << matrix[2][2] << endl;

    string str = "Algorithms";
    cout << str << endl;
    int len = str.size();
    cout << len << endl;
    cout << str[0] << endl;
    cout << str[3] << endl;
    cout << str[len - 1] << endl;
    str[len - 1] = 'x'; // Strings are Mutable
    cout << str << endl;
    return 0;
}