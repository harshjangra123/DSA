//  FUNCTIONS:---------------------------------------
#include <iostream>
using namespace std;
void triangle(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    triangle(a);
    cout << endl;
    triangle(b);
    cout << endl;
    triangle(c);

    return 0;
}
// main function sabse pehle chalta hai

#include <iostream>
using namespace std;
int sum(int x, int y)
{ // arguments
    return x + y;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b); // parameter
    return 0;
}


// some builtin functions
// cout<<min(x,y);
// cout<<max(x,y);
// cout<<sqrt(x,y);(#include<cmath)



// permutation and combination :-----
#include <iostream>
using namespace std;
int factorial(int a)
{

    int factorial = 1;
    for (int i = 1; i <= a; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int combination(int n, int r)
{ // n!/r! * (n-r)!     ncr
    int a = (factorial(n) / (factorial(r) * factorial(n - r)));
    return a;
}

int permutation(int n, int r)
{ // n!/(n-r)!     npr

    int b = (factorial(n) / (factorial(n - r)));
    return b;
}

int main()
{
    int a;
    cout << "plz input n: ";
    cin >> a;

    int b;
    cout << "plz input r: ";
    cin >> b;

    cout << "ncr = " << combination(a, b) << endl;
    cout << "ncp = " << permutation(a, b) << endl;

    return 0;
}


// pascal triangle
#include <iostream>
using namespace std;
int factorial(int a)
{

    int factorial = 1;
    for (int i = 1; i <= a; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int combination(int n, int r)
{ // n!/r! * (n-r)!     ncr
    int a = (factorial(n) / (factorial(r) * factorial(n - r)));
    return a;
}

int permutation(int n, int r)
{ // n!/(n-r)!     npr

    int b = (factorial(n) / (factorial(n - r)));
    return b;
}
int main()
{
    int a;
    cin >> a;
    int n = a + 1;
    int nst = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < (n)-i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < nst; k++)
        {
            cout << combination(i, k) << " ";
        }

        nst++;
        cout << endl;
    }

    return 0;
}





#include <iostream>
using namespace std;
int a = 1;                       // global variabe all functions can use it
void ititit(int s, int u, int v) // formal parameters
{

    cout << a;
}

int main()
{
    int s; // local variables
    int u;
    int v;
    cout << a + 3 << endl;
    ititit(s, u, v); // actual parameters
    return 0;
}

// cases:-------------------------
#include <iostream>
using namespace std;
void uuu(int a = 8, int b = 7)
{ // if you are declring here, you have to declare all thr variables otherwise dont even declare one
    cout << a << " " << b << " ";
}
int main()
{
    uuu(3); // above is default value you can change it from here
    return 0;
}
// we can also have different datatypes in formal arguments.
// but wealso have to take same datatypes in actual arguments strictly in float and int.

// gcd of two given number:
//  hcf(x,y) <=min(x,y)



#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    int hcf = 1;
    for (int i = min(x, y); i >= 1; i--) // int i = 1; i <= min(x, y); i++
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << gcd(a, b);

    return 0;
}

#include <iostream>
using namespace std;
int gretestnum(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
        return z;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << gretestnum(a, b, c);
    return 0;
}

// factorials of first n terms:---------------
#include <iostream>
using namespace std;
int fact(int a)
{
    int factorial = 1;
    for (int i = 1; i <= a; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<fact(i)<<endl;
    }
    
    return 0;
}
#include<iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
        cout<<fact<<endl;
    }
    
    return 0;
}



// SWAP TWO NUMBERS:-------------------
// take an extra balti
#include<iostream>
using namespace std;

int main() {
int a;
cin>>a;
int b;
cin>>b;
int c = a;
a=b;
b=c;
// swap(a,b);
cout<<a<<endl;
cout<<b<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main() {
int a,b;
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<a<<endl;
cout<<b;
    return 0;
}