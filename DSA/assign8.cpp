#include <iostream>
using namespace std;

class stack
{
private:
    int capacity;
    int top;
    int *ptr;

public:
    stack(int);
    void push(int);
    int peek();
    int pop();
    ~stack();
    bool isFull();
    bool isEmpty();
    void reverse();
    int minimum();
    int getSize();
    int getCapacity();
    stack &operator=(stack &);
};
stack::stack(int c)
{
    capacity = c;
    top = -1;
    ptr = new int[c];
}
void stack::push(int data)
{
    if (top == capacity - 1)
    {
        cout << "Stack is full";
    }
    else
    {
        top++;
        ptr[top] = data;
    }
}
int stack::peek()
{
    if (top == -1)
    {
        cout << "Stack is empty.";
    }
    else
    {
        return ptr[top];
    }
}
int stack::pop()
{
    if (top == -1)
    {
        cout << "Stack is underflow." << endl;
    }
    else
    {
        int temp = ptr[top];
        cout << temp;
        return ptr[top];
        top--;
    }
}
stack::~stack()
{
    while (ptr != nullptr)
    {
        delete[] ptr;
    }
}
bool stack::isFull()
{
    if (ptr[top] == capacity - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool stack::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
void stack::reverse()
{
    int *temp = new int[capacity];
    for (int i = top; i >= 0; i--)
    {
        temp[top - i] = ptr[i];
    }
    for (int i = 0; i <= top; i++)
    {
        ptr[i] = temp[i];
    }
}
int stack::getCapacity()
{
    return capacity;
}
int stack::getSize()
{
    return top + 1;
}
stack &stack::operator=(stack &st)
{
    if (ptr != nullptr)
    {
        delete[] ptr;
    }
    capacity = st.capacity;
    top = st.top;
    ptr = new int[capacity];
    for (int i = 0; i <= top; i++)
        ptr[i] = st.ptr[i];
    return *this;
}
void reverseStack(stack &stk)
{
    stack stk2(stk.getCapacity());
    // stk2=stk; //copy assignment operator
    // or
    // stack stk2=stk; //copy constructor
    int v;
    for (int i = 0; i < stk.getSize(); i++)
    {
        v = stk.pop();
        stk2.push(v);
    }
    stk = stk2; // for this need to assign a copy assign operator
}
int stack::minimum()
{
    int mini = 11111111;
    for (int i = 0; i <= top; i++)
    {
        if (ptr[i] < mini)
        {
            mini = ptr[i];
        }
    }
    return mini;
}

int main()
{
    stack s();
    return 0;
}