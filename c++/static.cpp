#include <iostream>
using namespace std;

class Item
{
public:
    int a;
    static int k;
    void show()
    {
        cout << a << " ";
    }
};
int Item::k = 10;
int main()
{
    Item i1;
    Item i2;
    i1.a = 20;
    i1.show();

    cout << i1.k;
}
