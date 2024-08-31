// Print the following pattern
// Input: n = 5
// Output:
//      1
//    1 2 3
//  1 2 3 4 5
// 1 2 3 4 5 6 7
#include <iostream>
using namespace std;
int main()
{
    int b;
    cin >> b;
    int a = b - 1;
    int c = (4 * 2) - 1;
    int nsp = a - 1;
    int nst = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << k;
        }
        nsp--;
        nst += 2;
        cout << endl;
    }

    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int nsp = a - 1;
    int nst = 1;
    for (int i = 1; i <= a; i++)
    {
        int g = 65;
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << (char)g;
            g++;
        }
        nsp--;
        nst += 2;
        cout << endl;
    }

    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {

        for (int j = 1; j <= a - i; j++)
        {
            cout << " ";
        }
        int b = 65 + i;
        for (int k = b - 1; k > 64; k--)
        {
            cout << (char)k;
        }
        int g = 66;
        for (int l = 1; l <= i - 1; l++)
        {
            cout << (char)g;
            g++;
        }

        cout << endl;
    }

    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:

// A B C D E F G
// A B C   E F G
// A B       F G
// A           G
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b = (2 * a) - 1;
    int c = 65;
    int n = a - 1;
    for (int i = 1; i <= b; i++)
    {
        cout << (char)c;
        c++;
    }

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int g = 65;
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            cout << (char)g;
            g++;
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
            g++;
        }
        for (int k = 1; k < i; k++)
        {
            cout << " ";
            g++;
        }
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            cout << (char)g;
            g++;
        }

        cout << endl;
    }

    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b = (a * 2) - 1;
    int s = 1;
    int t = a - 1;
    for (int i = 1; i <= b; i++)
    {
        cout << s;
        if (i < a)
        {
            s++;
        }
        else
            s--;
    }
    cout << endl;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= (t + 1) - i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l < i; l++)
        {
            cout << " ";
        }
        int o = a - i;
        for (int m = 1; m <= (t + 1) - i; m++)
        {
            cout << o;
            o--;
        }

        cout << endl;
    }

    return 0;
}

// Print the following pattern
// Input : n = 5
// Output:
// *       *
//  *     *
//   *   *
//    * *
//     *

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        for (int k = 1; k <= (a)-i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= (a)-i; l++)
        {
            if (l == a - i)
            {
                cout << "*";
            }
            else
                cout << " ";
            // cout<<"#";
        }

        cout << endl;
    }

    return 0;
}

// Print the following pattern
// Sample Input : m = 4
// Sample Output :
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int nsp = a - 1;
    int nst = 1;
    for (int i = 1; i <= (2 * a) - 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= nst; k++)
        {
            if (k == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int l = 2; l <= nst; l++)
        {
            if (l == nst)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        if (i < a)
        {
            nsp--;
            nst++;
        }
        else
        {
            nsp++;
            nst--;
        }
        cout << endl;
    }

    return 0;
}

// Print the following pattern
// Sample Input : n = 4
// Output :
//    1
//   2 2
//  3   3
// 4     4

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int nsp = a - 1;
    int s = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == 1)
            {
                cout << s;
            }
            else
                cout << " ";
        }
        for (int k = 2; k <= i; k++)
        {
            if (k == i)
            {
                cout << s;
            }
            else
                cout << " ";
        }
        cout << endl;
        nsp--;
        s++;
    }

    return 0;
}





// Print the following pattern
// Sample Input : n = 5
// Output :

//      *
//    * * *
//   *  *  *
//  *   *   *
// *    *    *
// ***********
// * * *
// * * *
// * * *
// ***
// *
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int nsp = a - 1;
    int nst = 1;
    for (int i = 1; i <= (2 * a) - 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= nst; k++)
        {
            if (k == 1 || i==a || k==nst)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int l = 2; l <= nst; l++)
        {
            if (l == nst || i==a)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        if (i < a)
        {
            nsp--;
            nst++;
        }
        else
        {
            nsp++;
            nst--;
        }
        cout << endl;
    }

    return 0;
}




// Print the following pattern
// Input : n = 4
// Output :

// *     *
// **   **
// *** ***
// *******
// *******
// *** ***
// **   **
// *     *
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b = a-1;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <= (b+1)-i; k++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= (b)-i; k++)
        {
            cout<<" ";
        }
        for (int l = 1; l <=i ; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = 0; i < (a*2)-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int i = 0; i < (a*2)-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <=(b+1)-i ; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<" ";
        }
        for (int k = 1; k < i; k++)
        {
            cout<<" ";
        }
        for (int l = 1; l <= (b+1)-i ; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}




// Print the following pattern
// Input: n = 4

// Output:
// *******
// *** ***
// **   **
// *     *
// **   **
// *** ***
// *******
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int nsp = a;
    int nst = 1;
    int n = a-1;
;
    for (int i = 1; i <= (2 * a) - 1; i++)
    {

        cout<<"*";
    }
    cout<<endl;
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= (n+1)-i; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<" "; 
        }
        for (int k = 2; k <= i; k++)
        {
            cout<<" "; 
        }
        for (int j = 1; j <= (n+1)-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <= (n+1)-i; k++)
        {
            cout<<" ";

        }
        for (int k = 1; k <= (n)-i; k++)
        {
            cout<<" ";
            
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    



    for (int i = 1; i <= (2 * a) - 1; i++)
    {

        cout<<"*";
    }

    return 0;
}