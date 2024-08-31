// //  input
#include <iostream>
using namespace std;
int main () {
float x;
cout<<"plz input the number : "<<endl;
cin>>x;
cout<<"the square of the number is: "<<endl<<(x*x)<<endl;

int h;
int y;
cin>>h>>y;
cout<<"the numbers are:"<<h<<"and"<<y<<endl;
cout<<"the numbers are :"<<endl<<h<<endl<<y<<endl;

int p = 3;
cout<<(x=7);   //it will give 7 as answer
    return 0;
}

//relational operators:-------------------\

// == is equal to
// != is not equal to
// > greater than
//  answers in 0 or 1
#include<iostream>
using namespace std;
int main () {
// bool p = false;
// bool q = false;
// bool r = true;
int p = 1;
int q= 2;
int r= 3;
cout <<(p==q==r)<<endl;   // always calculate right to left
    return 0;

}

// char data type :-----------------
#include<iostream>
using namespace std;
int main() {
char ch = '$';      // always single value
char x = 'q';
cout<<ch<<"   "<<x<<endl;
    return 0;
}

// ascii values:---------------------------
#include<iostream>
using namespace std;
int main () {
char ch = 'a';
cout <<(int)ch<<endl; //typecasting
    return 0;
}
// a=97,A=65,0=48

// typecasting:-----------------------------
#include <iostream>
using namespace std;
int main()
{
    // int,float,bool,char-> typecasting
    bool bul = true;
    cout<<(int)bul+69<<endl;

    char alp ='A';
    cout<<(int)alp+3498<<endl;

    float r = 1.998;
    cout<<(int)r<<endl;
    return 0;
}
// half of the number:----------------
#include<iostream>
using namespace std;
int main () {
int a;
cout<<"plz input the number to half it :";
cin>>a;
cout<<(float)a/2<<endl;
    return 0;
}
// print fractional part of the real number:----------------
// gratest integer : locate our number of number line and just left to ot will be greatest integer
#include<iostream>
using namespace std;
int main() {
    float x;
    cin>>x;
    int y = (int)x;
    x=x-y;
    cout<<"fractional part:"<<x<<endl;
    cout<<"greatest integer:"<<y<<endl;

    return 0;
}

// operator hierarchy:-----------------------important *****************
// *,/ > +,-
// in the notebook

// question :-------------------------------------important
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int p = 5, q = 10;
    p += q -= p;
    //from the right expression ^^^
    cout<<p<<"  "<<q<<endl;


    return 0;
}


