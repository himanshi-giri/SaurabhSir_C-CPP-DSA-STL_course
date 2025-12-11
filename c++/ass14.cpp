#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int a = 0, int b = 0)
    {
        real = a;
        imag = b;
    }
    friend Complex operator+(Complex &, Complex &);
    friend Complex operator-(Complex &, Complex &);
    friend Complex operator*(Complex &, Complex &);
    // friend Complex operator+(Complex &, Complex &);
    friend ostream &operator<<(ostream &, Complex);
    friend istream &operator>>(istream &, Complex &);
    Complex operator=(Complex);
};
Complex Complex::operator=(Complex c)
{
    imag = c.imag;
    real = c.real;
    return *this;
}
Complex operator+(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.imag = c1.imag + c2.imag;
    temp.real = c1.real + c2.real;
    return temp;
}
Complex operator-(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.imag = c1.imag - c2.imag;
    temp.real = c1.real - c2.real;
    return temp;
}
Complex operator*(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.imag = c1.imag * c2.imag;
    temp.real = c1.real * c2.real;
    return temp;
}
ostream &operator<<(ostream &dout, Complex c)
{
    dout << c.real << "+" << c.imag << "i";
    return dout;
}
istream &operator>>(istream &din, Complex &c)
{
    din >> c.real >> c.imag;
    return din;
}
int main()
{
    Complex c1;
    cin >> c1;
    Complex c2;
    cin >> c2;
    Complex c3;
    c3 = c1 + c2;
    cout << c3 << endl;
    c3 = c1 - c2;
    cout << c3 << endl;
    c3 = c1 * c2;
    cout << c3 << endl;
    Complex c4;
    cout << "Before c4 = " << c4;
    c4 = c1;
    cout << "After c4 = " << c4;
}