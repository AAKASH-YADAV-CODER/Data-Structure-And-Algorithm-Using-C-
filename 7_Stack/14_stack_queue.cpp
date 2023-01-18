#include <iostream>
#include <queue>
using namespace std;
class stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    stack()
    {
        int N = 0;
    }
    void push(int val)
    {
        q1.push(val);
        N++;
    }
    void pop()
    {
        if (q1.empty())
        {
            return;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        // return ans;
    }
    int top()
    {
        return q1.back();
    }
    int size()
    {
        return N;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(11);
    st.push(123);
    st.push(12);
    st.push(13);
    cout << st.top() << endl;
    cout << st.size() << endl;

    return 0;
}