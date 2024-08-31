// patteren printin

// star rohmbus
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 0; j < a - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < a; k++)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}

// star pyramid
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 0; j < (a)-i; j++)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << "*";
    }

    for (int l = 1; l <= i - 1; l++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}

// odd no. of star triangle
// *
// ***
// *****
// *******
// *********
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= (2 * i) - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}

// NSP AND NST MEATHOD :

// star pyramid
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
    for (int j = 1; j <= nsp; j++)
    {
      cout << " ";
    }
    for (int i = 0; i < nst; i++)
    {
      cout << "*";
    }

    nsp--;
    nst += 2;
    cout << endl;
  }

  return 0;
}

// number pyramid
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 0; j < a - i; j++)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << k;
    }
    for (int l = i - 1; l >= 1; l--)
    {
      cout << l;
    }

    cout << endl;
  }

  return 0;
}

// 1
// 21
// 321
// 4321
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = i - 1; j >= 1; j--)
    {

      cout << j;
    }
    cout << endl;
  }

  return 0;
}

// STAR DIAMOND
#include <iostream>
using namespace std;
int main()
{
  int b;
  cin >> b;
  int a = (2 * b) - 1;
  int nsp = b - 1;
  int nst = 1;

  for (int i = 1; i <= a; i++)
  {

    for (int j = 0; j < nsp; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < nst; k++)
    {
      cout << "*";
    }
    if (i <= b - 1)
    {
      nsp--;
      nst += 2;
      cout << endl;
    }
    else
    {
      nsp++;
      nst -= 2;
      cout << endl;
    }
  }

  return 0;
}

// STAR BRIDGE
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 0; j < (a + 1) - i; j++)
    {
      cout << "*";
    }
    for (int k = 0; k < i - 1; k++)
    {
      cout << " ";
    }
    for (int k = 0; k < i - 1; k++)
    {
      cout << " ";
    }
    for (int j = 0; j < (a + 1) - i; j++)
    {
      cout << "*";
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

  for (int i = 1; i <= (a * 2) - 1; i++)
  {
    cout << "*";
  }
  cout << endl;

  int b = a - 1;
  for (int i = 1; i <= b; i++)
  {
    for (int j = 1; j <= (b + 1) - i; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << " ";
    }
    for (int k = 1; k <= i - 1; k++)
    {
      cout << " ";
    }
    for (int l = 1; l <= (b + 1) - i; l++)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}

// NUMBER BRIDGE:-------------
#include <iostream> // **important**
using namespace std;
int main()
{
  int a;
  cin >> a;

  for (int i = 1; i <= (a * 2) - 1; i++)
  {
    cout << i;
  }
  cout << endl;

  int b = a - 1;
  for (int i = 1; i <= b; i++)
  {
    int e = 1;
    for (int j = 1; j <= (b + 1) - i; j++)
    {
      cout << e;
      e++;
    }
    for (int k = 1; k <= i; k++)
    {
      cout << " ";
      e++;
    }
    for (int k = 1; k < i; k++)
    {
      cout << " ";
      e++;
    }
    int c = a + 1;
    for (int l = 1; l <= (b + 1) - i; l++)
    {
      cout << e;
      e++;
    }

    cout << endl;
  }

  return 0;
}

// NUMBER SPIRAL
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  int b = (2 * a) - 1;
 
  // pseudo numbering
  for (int i = 1; i <= b; i++)
  {

    for (int j = 1; j <= b; j++)
    {
      int e = i;
      int f = j;
      if (e > a)
      {
        e = 2 * a - i;
      }
      if (f > a)
      {
        f = 2 * a - j;
      }
      int x = min(e,f);
      cout << a - (x-1);
    }

    cout << endl;
  }

  return 0;
}