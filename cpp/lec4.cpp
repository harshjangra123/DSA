//  TERNARY OPERATOR :-------------------------------------------
//  expression1 ? expression2 : expression 3
#include<iostream>
using namespace std;
int main (){
    int a;
    cin>>a;
    a%2==0 ? cout<<"even"<<endl : cout<<"false"<<endl;

    return 0;
}

// question 2:------------
#include<iostream>
using namespace std;
int main() {
    char x;
    int a= 2;
    x = (a>0) ?'a':'S';
    cout<<x<<endl;
    cout<<a<<endl;
    return 0;
}

// question 3  :--------------------
#include<iostream>
using namespace std;
int main() {
    int x;
    x =  5>8 ? 10 : 1!=2<5?20:30;         // solve right to left
    cout <<x<<endl;
    return 0;
}

//  SWITCH STATEMENTS:-------------------------------
#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "plz input the number:";
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;
    default:
    cout<<"plz entre valid number";
        break;
    }

    return 0;
}

//  questions further:------------------------------
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch ((x <= 7 && x % 2 != 0) || (x <= 8 && x % 2 == 0))
    {
    case 1:
        cout << 31 << endl;
        break;
    }

    switch (x == 3 || x == 6 || x == 9 || x == 11)
    {
    case 1:
        cout << 30 << endl;
        break;
    }

        switch (x)
        {

        case 2:
            cout << 28 << endl;
            break;
        }

        return 0;
    }                                                //******idk****************

//  calculator question:----------------------

#include <iostream>
using namespace std;
int main()
{
    char op;
    int a, b;
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "plz put valid operato" << endl;
    }
    return 0;
}

// question:------------------
#include<iostream>
using namespace std;
int main() {
int x = 65;
char j = 'A';
if (x == j)
{
    /* code */
    cout<<"dsaefnedbnbnbnbnbnbnbnbnbnshfgo"<<endl;
}
else cout<<"efuh";

   return 0;
}


//  it works even when there is an expression in the if condition just take it as a true
#include<iostream>
using namespace std;
int main() {
    int a;
    if (3+5%2)
    {
        cout<<"this works"<<endl;
    }
    if (a=10)
    {
        cout<<"even this also works"<<endl;
    }
    if (-5)
    {
        cout<<"thisssssssssss also works"<<endl;
    }
    return 0;
}