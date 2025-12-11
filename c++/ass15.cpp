#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    friend ostream &operator<<(ostream &, Complex);
    friend istream &operator>>(istream &, Complex &);
    friend Complex operator-(Complex &);
};
Complex operator-(Complex &c)
{
    Complex temp;
    temp.a = -c.a;
    temp.b = -c.b;
    return temp;
}
ostream &operator<<(ostream &dout, Complex c)
{
    dout << c.a << " " << c.b;
    return dout;
}
istream &operator>>(istream &din, Complex &c)
{
    din >> c.a;
    din >> c.b;
    return din;
}

int main()
{
    Complex c1, c2, c3;
    cout << "Enter the reall and imag of c1 object\n";
    cin >> c1;
    cout << "Enter the reall and imag of c2 object\n";
    cin >> c2;
    c3 = -c1;
    cout << c3;
}
