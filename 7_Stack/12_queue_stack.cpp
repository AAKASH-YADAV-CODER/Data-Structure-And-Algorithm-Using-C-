#include <iostream>
#include <stack>
using namespace std;
class queue
{
    stack<int> st1;

public:
    void push(int x)
    {
        st1.push(x);
    }
    int pop()
    {
        if (st1.empty())
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        int a = st1.top();
        st1.pop();
        if (st1.empty())
        {
            return a;
        }
        int item = pop();
        st1.push(a);
        return item;
    }
    bool empty()
    {
        if (st1.empty())
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
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;
    cout << q.empty() << endl;

    return 0;
}