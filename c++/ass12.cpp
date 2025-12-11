#include <iostream>
using namespace std;

// class Complex
// {
// private:
//     int a, b;

// public:
//     Complex();
//     Complex(int, int);
//     void show()
//     {
//         cout << a << " " << b << endl;
//     }
//     Complex operator+(Complex &);
//     Complex operator-(Complex &);
//     Complex operator*(Complex &);
//     Complex operator==(Complex &);
// };
// Complex::Complex()
// {
//     a = 0;
//     b = 0;
// }
// Complex::Complex(int x, int y)
// {
//     a = x;
//     b = y;
// }
// Complex Complex::operator+(Complex &c)
// {
//     Complex temp;
//     temp.a = a + c.a;
//     temp.b = b + c.b;
//     return temp;
// }
// Complex Complex ::operator-(Complex &c)
// {
//     Complex temp;
//     temp.a = a - c.a;
//     temp.b = b - c.b;
//     return temp;
// }
// Complex Complex::operator*(Complex &c)
// {
//     Complex temp;
//     temp.a = a * c.a;
//     temp.b = b * c.b;
//     return temp;
// }
// Complex Complex::operator==(Complex &c)
// {
//     Complex temp;
//     temp.a = a == c.a ? 1 : 0;
//     temp.b = b == c.b ? 1 : 0;
//     return temp;
// }

// int main()
// {
//     Complex c1(5, 6);
//     c1.show();

//     Complex c2(5, 6);
//     c2.show();
//     Complex c3;
//     c3 = c1 + c2;
//     cout << "Add :";
//     c3.show();

//     c3 = c1 - c2;
//     cout << "Sub :";
//     c3.show();

//     c3 = c1 * c2;
//     cout << "Mul :";
//     c3.show();

//     c3 = c1 == c2;
//     cout << "Equal :";
//     c3.show();
// }

class Time
{
private:
    int hour, min, sec;

public:
    Time()
    {
        hour = 0;
        sec = 0;
        min = 0;
    }
    void show()
    {
        cout << hour << ":" << min << ":" << sec << endl;
    }
    // Time(int, int, int);
    void getTime()
    {
        cout << "Enter hour :";
        cin >> hour;
        cout << "Enter min :";
        cin >> min;
        cout << "Enter second :";
        cin >> sec;
    }
    bool operator>(Time &);
    Time &operator++();    // pre-increment
    Time &operator++(int); // post-increment
    void normalize();
};

void Time::normalize()
{
    // if second increases  60 then will add 1 to min and sub 60 from sec
    if (sec >= 60)
    {
        sec -= 60;
        min++;
    }
    if (min >= 60)
    {
        min -= 60;
        hour++;
    }
    if (hour >= 24)
    {
        hour -= 24;
    }
}
// Time::Time(int h, int m, int s)
// {
//     hour = h;
//     min = m;
//     sec = s;
// }
bool Time::operator>(Time &t)
{
    if (hour > t.hour)
        return true;
    if (hour < t.hour)
        return false;

    if (min > t.min)
        return true;
    if (min < t.min)
        return false;

    return sec > t.sec;
}
// pre increment
Time &Time::operator++()
{
    ++sec;
    normalize();
    return *this;
}
// post- increment
Time &Time::operator++(int)
{
    Time temp = *this;
    sec++;
    normalize();
    return *this;
}
int main()
{
    Time t1;
    t1.getTime();
    Time t2;
    // t2.getTime();

    // if (t1 > t2)
    //     cout << "T1 is greater than t2";
    // else
    //     cout << "T2 is greater than t1";
    Time t3;
    cout << "pre-increment";
    t3 = ++t1;
    t3.show();

    cout << "Post-increment";
    t3 = t1++;
    t3.show();
}