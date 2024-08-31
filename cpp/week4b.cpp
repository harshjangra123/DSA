// Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int product (int *a,int *b) {
return (*a) * (*b);
}
int main () {
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<product(&a,&b);
    return 0;
}
// Q2 : int *p, q;
// p is a pointer and q is an integer. <<<<<<<<<<<<<<<<<<
// p and q both are pointers.
// P and q both are integers.
// Syntax is incorrect.



// Q3: Find the output of the following code snippet.   ******important********
#include <iostream>
using namespace std;
int main () {
int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << " " << a << " " << b;
return 0;
}
// 11 11 10
// 10 10 10
// 11 10 11 <<<<<<<<<<<<<<<<<<<<<
// 10 11 10



// Q4: Find the output of the following code snippet.
// int a = 15, b = 20;
// int *ptr = &a;
// int *ptr2 = &b;
// *ptr = *ptr2;
// ptr now points to b
// ptr2 now points to a
// a gets value of b   <<<<<<<<<<<<<<<<
// b gets value of a




// Q5: Is the following program snippet correct?
#include<iostream>
using namespace std;
int main  () {
int a = 10, b = 20;
int *ptr;
*ptr = 5;
}       //it can both correct or run time erroe