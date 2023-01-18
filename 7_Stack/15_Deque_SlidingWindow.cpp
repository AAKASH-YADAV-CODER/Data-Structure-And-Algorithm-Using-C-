// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <deque>
#include <math.h>
using namespace std;
int main()
{

    // deque<int> dq;
    // dq.push_back(1);
    // dq.push_back(12);
    // dq.push_front(2);
    // dq.push_front(23);
    // for (auto i : dq)
    //     cout << i << " ";
    // cout << endl;
    /// sliding window wala smh nahi aaya BC , totally seer ke upr see gaya
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    // multiset<int, greater<int>> s;///this line show it is wrong
    // vector<int> ans;
    // for (int i = 0; i < k; i++)//O(nlogn)
    //     s.insert(a[i]);
    // ans.push_back(*s.begin());
    // for (int i = k; i < n; i++)
    // {
    //     s.erase(s.lower_bound(a[i - x]));
    //     s.insert(a[i]);
    //     ans.push_back(*s.begin());
    // }
    // for (auto i : ans)
    //     cout << i << " ";
    deque<int> q;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() and a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    // ans.push_back(nums[q.front()]);///O(N)
    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }
        while (!q.empty() and a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(ans[q.front()]);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}