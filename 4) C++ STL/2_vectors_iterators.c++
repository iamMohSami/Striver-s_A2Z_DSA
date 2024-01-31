#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 2. VECTORS and ITERATORS

    vector<int> v;
    vector<float> f;
    vector<string> str;

    // to add elements to vector
    v.push_back(1);    //{1}
    v.emplace_back(2); // {1,2}

    vector<pair<int, int>> mix2;
    mix2.push_back({1, 2});
    mix2.emplace_back(3, 4); // emplace-back doesnt need extra braces, it considers itself 3,4 as pair

    vector<int> v1(5, 100); // {100,100,100,100,100}
    vector<int> v2(5);      // {0,0,0,0,0} OR 5 instances of garbage value // DEPENDS ON COMPILER

    // to copy one vector to other vector

    vector<int> va(3, 20); // va={20,20,20}
    vector<int> vb(va);    // vb = va = {20,20,20}

    // to access vector elements
    // CONCEPT OF ITERATOR

    vector<int> vec(3, 200); // vec={200,200,200}
    vector<int>::iterator it = vec.begin();
    cout << *(it) << endl; // OP : 200
    vec.emplace_back(7896);
    it = it + 1;
    cout << *(it) << endl; // garbage value
    it = it + 1;
    cout << *(it) << endl; // garbage value
    it = it + 1;
    cout << *(it) << endl; // garbage value
    // WHY ?? After emplace_back(7896), the vector may be reallocated and the elements moved to a new location: {200, 200, 200, 7896} The iterator it is not aware of the reallocation, and if you try to access elements after the reallocation point, you encounter undefined behavior.
    // to overcome this , use it = vec.begin() again

    it = vec.begin();
    cout << *(it) << endl; // 200
    it++;
    cout << *(it) << endl; // 200
    it++;
    cout << *(it) << endl; // 200
    it++;
    cout << *(it) << endl; // 7896
    it++;

    vector<int> po;
    po.emplace_back(10);
    po.emplace_back(20);
    po.emplace_back(30);

    cout << *(po.begin()) << endl; // 10
    cout << po[0] << endl;         // 10
    cout << po.at(0) << endl;      // 10
    cout << po.back() << endl;     // 30  (LAST ELEMENT)

    // to print entire vector using a for loop
    vector<int> loop;
    loop.emplace_back(10);
    loop.emplace_back(20);
    loop.emplace_back(30);
    loop.emplace_back(40);

    for (vector<int>::iterator it = loop.begin(); it != loop.end(); it++)
    {
        cout << *(it) << "\t";
    }
    cout << endl;
    // using "auto" keyword instead to remove big vector intialisatio '
    for (auto it = loop.begin(); it != loop.end(); it++)
    {
        cout << *(it) << "\t";
    }
    cout << endl;
    // using  for each loop
    for (auto it : loop)
    {
        cout << it << "\t";
    }
    cout << endl;

    // TO DELETE ELEMENTS FROM A VECTOR

    vector<int> ve;
    ve.emplace_back(5);
    ve.emplace_back(10);
    ve.emplace_back(15);
    ve.emplace_back(20);
    ve.emplace_back(25);
    ve.emplace_back(30);
    // lets print these
    cout << "Before Deleting : " << endl;
    for (auto it : ve)
    {
        cout << it << "\t";
    }
    cout << endl;
    // deleting 10
    ve.erase(ve.begin() + 1);
    cout << "After Deleting : " << endl;
    for (auto it : ve)
    {
        cout << it << "\t";
    }
    cout << endl;
    // deleting 15 and 20 together
    ve.erase(ve.begin() + 1, ve.begin() + 3); // ve.erase( [start,stop) ) start is inclusive,stop isnt
    cout << "After Deleting again : " << endl;
    for (auto it : ve)
    {
        cout << it << "\t";
    }
    cout << endl;

    // To insert in a vector
    // consider our ve vector only , now : 5 25 30
    // lets insert back 10 after 5
    ve.insert(ve.begin() + 1, 10);
    cout << "After Inserting 10 : " << endl;
    for (auto it : ve)
    {
        cout << it << "\t";
    }
    cout << endl;

    // lets insert 3 continous 50's at the end
    ve.insert(ve.begin() + 4, 3, 50);
    cout << "After Inserting three 50's : " << endl;
    for (auto it : ve)
    {
        cout << it << "\t";
    }
    cout << endl;

    // Additional Commands
    // size of vector
    cout << "The size of vector ve is : " << ve.size() << endl;

    // pop back :removes the last element of the vector
    ve.pop_back();
    cout << "Using Pop Back removes the last element of the vector";
    for (auto it : ve)
    {
        cout << it << "\t";
    }
    cout << endl;

    // is empty or not ; if we have 1 element in vector also, it will return 0 (false)
    cout << "Is ve empty ?" << ve.empty() << endl;

    // to erase(clear/delete) entire vector
    ve.clear();

    return 0;
}