#include "bits/stdc++.h"
using namespace std;
// vector dynamically allocate hota hai main reason for using it and array staticlly

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << endl;
    }
    for (auto element : v)
    {
        cout << element << endl;
    }
    v.pop_back();
    vector<int> v2(3, 50);
    swap(v, v2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }
    // for sorting like we do in string
    sort(v.begin(), v.end());
    // std::pair allow pair of diffrent data type ko store krta hai( its an STL container which cantain pair in vector)
    pair<int, char> p;
    p.first = 3;
    p.second = 'a';
    return 0;
}