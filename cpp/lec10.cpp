#include<iostream>
using namespace std;
int main( ) {
cout<<sizeof(int);    //sizeof

    return 0;
}


//   POINTERS:=================
#include<iostream>
using namespace std;
int main( ) {
// int x = 's' ;
// cout<<&x;  //it will give the address
int x = 4;
int * p = &x;


cout<<&x<<endl;
cout<<p<<endl;
cout<<&p<<endl;
cout<<*p;
// basicaly pointer is a different datatype which store address which itself have some different address
// datatype * pointername
    return 0;
}




//PLAYING WITH POINTERS:----------------
//dereference operators
#include<iostream>
using namespace std;
int main  () {
    int x = 122;
    int* p = &x;
    cout<<*p;
//this changes all the dynamics
//we can access the value of of x from this
    return 0;
}


//sum question from pointers:
#include<iostream>
using namespace std;
int main () {
    int x;
    cin>>x;
    int * p = &x;
    int y;
    cin>>y;
    int * p1 = &y;
    int sum = *p + *p1;
    cout<<sum;
    return 0;
}

//int* p = &x, p1 = y;
//pointer then int 

// .........................................................................................

//PASS BY VALUE AND PAAS BY REFRENCE
#include<iostream>
using namespace std;
void swap (int * x,int * y) {

    int temp = *x;
    *x = *y;          //call by refrence
    *y = temp;
    return ;
}
int main() {
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}


//using call by reference using alias
#include<iostream>
using namespace std;
void swap (int &x,int &y) {

    int temp = x;   //paas by refrence
    x = y;          //call by alias
    y = temp;
    return ;
}
int main() {
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}


// ............................................................................................
//pointer arithmatic 
#include<iostream>
using namespace std;
int main () {
int x =5;
int * p = &x;
p = p+1;   //address will increase by 4 as it is an integer pointer
    return 0; 
}// address is hexadecimal

#include<iostream>
using namespace std;
int main () {
int x =4;
int * p = &x;
cout<<*p<<endl;   //4
p = p+1;
cout<<*p<<endl;   //6422284
    return 0; 
}


#include<iostream>
using namespace std;
int main() {
    int a=15;
    int *ptr = &a;
    int b = ++(*ptr);  //it will also count , not onlly in the b integer
    cout<<a<<" "<<b;
    return 0;
}   //16 16

#include<iostream>
using namespace std;
int main() {
    int a=15;
    int *ptr = &a;
    int b = (*ptr)++;  //post increment  
    cout<<a<<" "<<b;
    return 0;
}  // 16 15




// first and last digit of a number without returnig anything
#include<iostream>
using namespace std;
void lfd (int &n) {
int lastdigit = n%10;
int fd = 0;
for (int i = 1; ; i++)
{
    int lastdigit = n%10;
    fd = lastdigit;
    n/=10;
    if (n<1)
    {
        break;
    }
    
}
cout<<"firstdigit:"<<fd<<"lastdigit:"<<lastdigit;
}
int main () 
{
    int a;
    cin>>a;
    lfd(a);
    return 0;
}
// same questions
#include<iostream>
using namespace std;
void lfd (int n,int *p1,int*p2) {
*p2 = n%10;
// *p1 = 0;
for (int i = 1; ; i++)
{
    int lastdigit = n%10;
    *p1 = lastdigit;
    n/=10;
    if (n<1)
    {
        break;
    }
    
}
// cout<<"firstdigit:"<<fd<<"lastdigit:"<<lastdigit;
}
int main () 
{
    int a;
    cin>>a;
    int firstdigit,lastdigit ;
    int * p1 = & firstdigit;
    int * p2 = & lastdigit;
    lfd(a,p1,p2);
    cout<<"firstdigi: "<<*p1<<" lastdigit: "<<*p2;
    return 0;
}




// null pointer:------------      *****imporant******
#include<iostream>
using namespace std;
int main() {
int *ptr = NULL; //reserved sddress
int * ptr1 = 0;
int *ptr2 = '\0';
// '\0' nul character
    return 0;
}


// double pointer:--------------
#include<iostream>
using namespace std;
int main () {
    int x =5;
    int * ptr = &x;
    int ** p = &ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    cout<<*p<<endl;
    return 0;
}