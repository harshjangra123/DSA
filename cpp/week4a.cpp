// Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
void square (int n) {
    for (int i = 1; i <= n; i++)
    {
        cout<<i*i<<endl;
    }
    
}
int main () {
    int a;
    cin>>a;
    square(a);

    return 0;
}
// Q2 : Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
float area (int n) {
    return (3.14 * n *n);
}
int main () {
    int a;
    cout<<"input the radius of circle:";
    cin>>a;
    cout<<"area of the circle is:"<<area(a)<<endl;

    return 0;
}
// Q3: Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
void printodd(int p , int q){
  for (int i = p; i <= q; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<endl;
        }
        
    }
}
int main () {
int a;
cout<<"pla inputfirst number:";
cin>>a;
int b;
cout<<"plz input 2nd numbre:";
cin>>b;
printodd(a,b);
    return 0;
}
// Q4: Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int count (int a) {
    int countt = 0;
    for (int i = 0;; i++)
    {
        a=a/10;
        countt++;
        if (a<1)
        {
            break;
        }
    }
        return countt;
    
}
int main () {
    int a;
    cin>>a;
    cout<<count(a);
    return 0;
}
// Q5: The minimum number of functions present in any C++ program is:
// 0
// 1
// 2
// Infinite  <<<<<<<<<

// Q6: State True and False:
// A function may be called more than once from any other function  true 
// It is necessary for a function to return some value.   spektical

// Q7: Explore:
// Can the same function name be used for different functions without any conflict?
// no, it will create conflict
#include<iostream>
using namespace std;
int sum (int a,int b) {return a+b;}
int sum (int a,int b) {return a*b;}
int main() {
    sum (2,4);
    return 0;
}