#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> str(s.begin(), s.end());
    int res = 0;
    vector<char> ss;
    for (int i = 0; i < str.size(); i++)
    {
        res = res ^ str[i];
        ss.push_back(res);
    }

    cout << "The first unique number is :" << ss[0];
}