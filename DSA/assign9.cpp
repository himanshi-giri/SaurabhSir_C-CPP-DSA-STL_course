#include <iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class stack
{
private:
    node *top;

public:
    stack();
    void push(int);
    int pop();
    int peek();
    ~stack();
    bool isEmpty();
};
stack::stack()
{
    top = nullptr;
}
void stack::push(int x)
{
    node *n1 = new node;
    n1->item = x;
    // no node
    if (top == NULL)
    {
        top = n1;
        n1->next = nullptr;
    }
    // single node
    else
    {
        n1->next = top;
        top = n1;
    }
}
int stack::peek()
{
    if (top == nullptr)
        return -1;

    return (top->item);
}
int stack::pop()
{
    int val = top->item;

    // underflow
    if (top == NULL)
    {
        return -1;
    }
    // single node
    else if (top->next == nullptr)
    {
        // int val = top->item;
        delete top;
        top = nullptr;
    }
    else
    {
        // int val = top->item;
        node *temp = top;
        top = temp->next;
        delete temp;
    }
    return val;
}
stack::~stack()
{
    while (top)
        pop();
}
bool stack::isEmpty()
{
    return top = nullptr;
}

stack &reverseStack(stack &stk)
{
    stack *st1 = new stack();
    while (!stk.isEmpty())
    {
        st1->push(stk.pop());
    }
    return *st1;
}
// or another approach is as follow
void reversStack(stack &stk)
{
    stack s1;
    while (!stk.isEmpty())
    {
        s1.push(stk.pop());
    }
    stack s2;
    while (!s1.isEmpty())
    {
        s2.push(s1.pop());
    }
    while (!s2.isEmpty())
    {
        stk.push(s2.pop());
    }
}
bool isPalindrome(int num)
{
    // find length of num
    int n = 0, x;
    x = num;
    while (x)
    {
        x = x / 10;
        n++;
    }
    stack s1;
    if (n % 2) // odd length
    {
        for (int i = 0; i < n / 2; i++)
        {
            s1.push(num % 10);
            num = num / 10;
        }
        num = num / 10;
        while (num)
        {
            if (num % 10 != s1.pop())
                return false;
            num = num / 10;
        }
        return true;
    }
    else // even length
    {
        for (int i = 0; i < n / 2; i++)
        {
            s1.push(num % 10);
            num = num / 10;
        }
        while (num)
        {
            if (num % 10 != s1.pop())
                return false;
            num = num / 10;
        }
        return true;
    }
}

int main()
{

    return 0;
}