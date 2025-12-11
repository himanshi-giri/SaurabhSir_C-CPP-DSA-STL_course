#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    Complex *p1, *p2, *p3;
    p1 = new Complex(2, 3);
    p1->show();
    p2 = new Complex(4, 5);
    p2->show();
    p3 = new Complex(6, 7);
    p3->show();
    *p1 = *p1 + *p2;
    p1->show();
}