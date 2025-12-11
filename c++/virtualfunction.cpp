// function overriding ki problem ko solve krne ke lie we use virtual functions also known as run time polymorphism or function overriding or late binding;

#include <iostream>
using namespace std;

// //function overriding
// class Base
// {
// public:
//     virtual void show()
//     {
//         cout << "Base\n";
//     }
// };
// class Derived : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derived\n";
//     }
// };
// int main()
// {
//     Base *bptr;
//     bptr = new Derived();
//     bptr->show();
//     bptr = new Base();
//     bptr->show();
// }

// function hiding
class Base
{
public:
    void show()
    {
        cout << "Base\n";
    }
};
class Derived : public Base
{
public:
    void show(int a = 10)
    {
        cout << a << "inside derived";
        cout << "Derived\n";
    }
};
int main()
{
    // Base *bptr;
    // bptr = new Derived();
    // bptr->show();
    // bptr = new Base();
    // bptr->show();
    Derived obj;
    obj.show();
}