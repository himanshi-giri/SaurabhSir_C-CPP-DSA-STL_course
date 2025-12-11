#include <iostream>
using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//             if (j > 5 - i && j <= 5)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         cout << endl;
//     }
// }

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5 + 1; j++)
//             if (j >= i && j <= 5)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         cout << endl;
//     }
// }

//

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         int k = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << k;
//             k--;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         char ch = 'A';
//         for (int j = 1; j <= 5; j++)
//             if (j >= i && j <= 5)
//             {
//                 cout << ch;
//                 ch++;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         cout << endl;
//     }
// }

// int main()
// {
//     int x = 1;
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << x;
//             x++;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         char ch = 'A';
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j >= i && j <= 5)
//             {
//                 cout << char(ch + j - 1);
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == 1 || i == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}