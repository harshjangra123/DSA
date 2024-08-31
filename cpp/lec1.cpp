#include <iostream>
using namespace std;
int main()
{

    cout << "hiiiiiic" << endl
         << "harsh jangra"
         << endl
         << 4 << endl
         << 4 + 3 << endl
         << 4 * 3 << endl;

    int x = 4;
    int y = 5;
    cout << x << endl;
    x = x + 10;
    cout << x << endl;
    x = x * 8;
    cout << x << endl;
    cout << x + y << endl;
    cout << x * y << endl;
    cout << x - y << endl;
    cout << x / y << endl; // it will catch the gratest integer*************
    x -= 10;
    x *= 10;
    cout << x<<endl;

    return 0;
}


// INCREMENT AND DECREMENT :-------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
int x = 7;
cout<<++x<<endl;   //pre increment
cout<<x++<<endl;  // post increment   // first it will keep x then it will increment the x's value
cout<<x<<endl;
cout<<--x<<endl;     //pre decrement
cout<<x--<<endl;    //post decrement
cout<<x<<endl;

    return 0;
}


// float datatype
#include <iostream>
using namespace std;
int main() {
float x = 5;
float y = 4;
cout << x+y <<endl;
cout << x*y <<endl;
cout<< x/y <<endl;



// // questiobn:-----------------
int b= 3;
int a= 20;
//  a=bq+r   r = a-bq
int r ;
int q = a/b;
r= a-(b*q);
cout<<r<<endl;
int ff;
ff = a%b;
cout<<ff<<endl; 


// //  modulus operator (%) ********************************     (should always be integer)
// if a<b -> a%b = a
// a%(-b) -> a%b
// (-a)%b -> -(a%b)
// (-a)%(-b) -> -(a%b)


// //  calculating percentage of 5 subjects :------------------------------
float x1= 92;
float x2= 93;
float x3= 94;
float x4= 95;
float x5= 96;

float perceent = (x1+x2+x3+x4+x5)/5;
cout<<perceent<<endl;

// radius of circle :------------------------------------------------------
float rad;
cout<<"plz input the radius "<<endl;
cin>>rad;
float area = 3.14*rad*rad;
cout<<area<<endl;

    return 0;
}




//  boolean datatype :----------------------------
#include<iostream>
using namespace std;
int main () {

int x=5;
int y =6;
// cout<< x==y ;
int t= x<y;
cout<<t<<endl; 

bool jk = false;
bool kj =     true;
cout<<jk<<endl<<kj<<endl;
    return 0;
}