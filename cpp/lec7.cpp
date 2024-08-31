// pattren printing:------------------------------
// user input : no. of rows and no. of columns
//              no. of lines     no. of thing in each linr
// rectangle with coustom input of rows and column
#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "plz input the character:";
    cin >> x;
    int a;
    int b;
    cout << "plz input no. of rows:";
    cin >> a;
    cout << "plz input no. of columns:";
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
            cout << x;
        }
        cout << endl;
    }

    return 0;
}

// 1234
// 1234
// 1234
// 1234    question
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "plz entre no. of rows:";
    cin >> a;
    int b;
    cout << "plz entre the number till you want:";
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// *
// **
// ***
// ****
//  no. of row = no. of columns
#include <iostream>
using namespace std;
int main()
{
    char g;
    cin >> g;
    int a;
    cout << "no. of rows you want:";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << i << "  ";
        for (int j = 1; j <= i; j++)
        {

            cout << g;
        }
        cout << endl;
    }

    return 0;
}

// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "no. of rowsyou want:";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= (a - i); j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}
// with another meathod :------------------
// row  number + number of columns = number of rows+1
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j < ((a + 1) - i); j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}

//   1
//   12
//   123
//   1234
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "no. of rows you  want:";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// 12345
// 1234
// 123
// 12
// 1
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j < ((a + 1) - i); j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    // for (int i = 1; i <= a; i++)
    // {
    //     if (i%2!=0)
    //     {
    //         cout<<i<<endl;
    //     }
    //     else continue;
    // }
    int b = 1;
    for (int i = 0; i < a; i++)
    {
        cout << b << endl;
        b = b + 2;
    }

    return 0;
}

// 1
// 13
// 135
// 1357
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << b;
            b = b + 2;
        }
        cout << endl;
    }

    return 0;
}

// 13579
// 1257
// 135
// 13
// 1
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b = 1;
        for (int j = 1; j <= (a + 1) - i; j++)
        {
            cout << b;
            b = b + 2;
        }
        cout << endl;
    }

    return 0;
}

// alphabet square
// abcd
// abcd
// abcd
// abcd
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b = 65;

        for (int j = 0; j < a; j++)
        {
            cout << (char)b;
            (b)++;
        }
        cout << endl;
    }

    return 0;
}

// alphabet triangle
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b = 65;

        for (int j = 0; j <= i; j++)
        {
            cout << (char)b;
            (b)++;
        }
        cout << endl;
    }

    return 0;
}

// upsidedown alphabet triangle
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b = 65;

        for (int j = 1; j <= (a + 1) - i; j++)
        {
            cout << (char)b;
            (b)++;
        }
        cout << endl;
    }

    return 0;
}

// star plus ********important***********
// int mid = (n/2)+1
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int mid = (a / 2) + 1;

    if ((a % 2) != 0)
    {

        for (int i = 1; i <= a; i++)
        {
            if (i == mid)
            {
                for (int k = 1; k <= a; k++)
                {
                    cout << '*';
                }
                cout << endl;
            }
            else
            {

                for (int j = 1; j <= a; j++)
                {
                    if (j == mid)
                    {
                        cout << '*';
                    }
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
    }

    else
        cout << "plz entre valid number";
    return 0;
}

// star cross ****imp*******
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == j || (i + j) == (a + 1))
            {
                cout << '*';
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

// 1
// 23
// 456
// 78910
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int d = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << d;
            d++;
        }
        cout << endl;
    }

    return 0;
}

// 1
// 01
// 101
// 0101
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int d = 1;
    int s;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
            s = 1;
        else
            s = 0;
        for (int j = 1; j <= i; j++)
        {
            // if (d%2==0)
            // {
            //     cout<<'0';
            // }
            // else cout<<'1';

            // d++;
            cout << s;
            // fliping
            if (s == 1)
                s = 0;
            else
                s = 1;
        }
        cout << endl;
    }

    return 0;
}

// 1
// 01
// 101
// 0101
// 10101   second meathod
#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j || (i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
            {
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;
    }

    return 0;
}

// flipped star triangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

// number triangke flipped
#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;

    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}