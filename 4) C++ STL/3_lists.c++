#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 3 .LISTS
    // list is exact similar to vectors,
    // only difference is the operations like push_front , push_back || emplace_front , emplace_back are avlble whereas in vector we has ONLY PUSH_BACK AND EMPLACE_BACK
    // all methods/operations are faster and easier compared to a vector

    list<int> ls;
    ls.push_back(5);     //{5}
    ls.emplace_back(10); //{5,10}
    ls.push_front(2);    // {2,5,10}
    ls.emplace_front(1); //{1,2,5,10} ;

    cout << "Our List is : " << endl;
    for (auto it : ls)
    {
        cout << it << "\t";
    }
    cout << endl;

    // lets try swap
    list<int> l1;
    l1.emplace_front(99); //{99}
    l1.emplace_back(100); //{99,100}
    cout << "Printing l1 : " << endl;
    for (auto it : l1)
    {
        cout << it << "\t";
    }
    cout << endl;

    list<int> l2;
    l2.emplace_front(9); //{9}
    l2.emplace_back(10); //{9,10}
    cout << "Printing l2 : " << endl;
    for (auto it : l2)
    {
        cout << it << "\t";
    }
    cout << endl;

    l2.swap(l1);

    cout << "Printing l1 AFTER SWAP : " << endl;
    for (auto it : l1)
    {
        cout << it << "\t";
    }
    cout << endl;

    cout << "Printing l2 AFTER SWAP : " << endl;
    for (auto it : l2)
    {
        cout << it << "\t";
    }
    cout << endl;

    // begin , rbegin , end , rend , clear , insert , size , swap are all same as vector
}