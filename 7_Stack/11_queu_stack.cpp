#include <iostream>
#include <stack>
using namespace std;
class queue
{
    stack<int> st1;
    stack<int> st2;

public:
    void push(int x) // O(1)
    {
        st1.push(x);
    }
    int pop() // O(N) time complexity
    {
        if (st1.empty() and st2.empty())
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        if (st2.empty())
        {
            if (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int topval = st2.top();
        st2.pop();
        return topval;
    }
    bool empty()
    {
        if (st1.empty() and st2.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;
    return 0;
}