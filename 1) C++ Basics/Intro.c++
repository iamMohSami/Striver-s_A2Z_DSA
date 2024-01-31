#include <iostream>
using namespace std;
int main()
{
     int a = 7;
     // std::cout << "Hello DSA";
     cout << "Hello DSA" << endl
          << "Hii" << endl;
     cout << "Heyy"
          << "\n"
          << "Hola" << endl;

     // can use #include<bits/stdc++.h> to include all Librariers available in C++

     // INPUT cin AND OUTPUT cout

     int x, y;
     cin >> x >> y;
     cout << "The Value entered of x is : " << x << "\n";
     cout << "The Value entered of y is : " << y << "\n";

     // DATATYPE
     /* 1)int  2)float 3)double 4)char 5)long 6)long long 7)string and (getline)*/

     int b = 99;
     float c = 7.456;
     double d = 453.35;
     char ch = 'S';
     long e = 745682;
     long long f = 987456123456789;

     // check range and space occupied by each

     cout << b << endl;
     cout << c << endl;
     cout << d << endl;
     cout << ch << endl;
     cout << e << endl;
     cout << f << endl;

     string str = "Hello DSA";
     cout << str << endl;

     string str2;
     cin >> str2;          // ip = Hello DSA World..!!
     cout << str2 << endl; // op = Hello

     string str3;
     getline(cin, str3);   // ip = Hello DSA World..!!
     cout << str3 << endl; // op = Hello DSA World..!!

     return 0;
}
