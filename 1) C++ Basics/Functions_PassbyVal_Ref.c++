#include <bits/stdc++.h>
using namespace std;

// functions are of 4 types :
/*
void parametrized
void unparametrized
return parametrized
return unparametrized
*/

// void parametrized
void sum(int x, int y)
{
    int res = x + y;
    cout << res << endl;
    ;
}

// void unparametrized
void product()
{
    int x = 3, y = 4;
    int res2 = x * y;
    cout << res2 << endl;
}

// return parametrized
// return type can be anything, INT, FLOAT , CHAR, VECTOR , ARRAY....
int divide(int x, int y)
{
    return x / y;
}

// return unparametrized
// return type can be anything, INT, FLOAT , CHAR, VECTOR , ARRAY....
char capitalize()
{
    char ch = 'a';
    return ch - 32;
}

// to check pass by value
void change(int x)
{
    cout << x << endl;
    x = x + 5;
    cout << x << endl;
    x = x + 6;
    cout << x << endl;
}

// to check pass by reference  " Just use & symbol..!!"
void change2(int &x)
{
    cout << x << endl;
    x = x + 5;
    cout << x << endl;
    x = x + 6;
    cout << x << endl;
}

void changeArray(int arr[], int n)
{
    arr[0] = 115;
    cout << "The Value inside function : " << arr[0] << endl;
}

int main()
{
    int a = 3;
    int b = 5;
    sum(a, b);

    // call
    product();

    int val = divide(b, a);
    cout << val << endl;

    // call
    char capital = capitalize();
    cout << capital << endl;

    // there are some inbuilt functions also
    int maximum = max(a, b);
    cout << "The Maximum is :" << maximum << endl;
    int minimum = min(a, b);
    cout << "The Minimum is :" << minimum << endl;

    // Pass By Value and Pass by Reference

    // Pass By Value : a copy of number goes , not the original one
    int num = 10;
    change(num);
    cout << "Pass By Value retains : " << num << endl; // no change happens to actual value of num=10

    // Pass By Reference : the original number is sent to function to modify
    change2(num);
    cout << "Pass By Refernce does not retains : " << num << endl;

    // IMP NOTE : AN ARRAY ALWAYS GETS PASSED WITH REFERNCE ONLY, EVEN IF "&" IS NOT USED

    int arr[5] = {5, 10, 15, 20, 25};
    changeArray(arr, 5);
    cout << "The Value inside int main : " << arr[0] << endl;
}