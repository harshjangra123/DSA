// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// while ('1' < '2')
// cout << "In while loop" << endl;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int t = 10;
// while (t /= 2) {
// cout << "Hello" << endl;
// }
// }
// // hello  5 2 1 



// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// for (int x = 1; x * x <= 10; x++)
// cout << "In for loop" << endl;
// }





// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int x = 10, y = 0 ;
// while ( x >= y ) {
// x-- ;
// y++ ;
// cout << x << " " << y << endl ;
// }
// }


// // print sum of all even digits of given number
// // Sample Input : 4556
// // Output: 10
#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int sum = 0;
    for (int i = 0; ; i++)
    {
        int lastdigit = a%10;

        if (lastdigit%2 == 0)
        {
            sum = sum +lastdigit;
        }
        
        a=a/10;
        if(a<1) break;
    }
    cout<<sum;
    
    return 0;
}




// // WAP to print the sum of a given number and its reverse.
// // Sample Input : 12
// // Sample Output : 33 [12+21]
#include<iostream>
using namespace std;
int main () {
int a ;
cout<<"plz input the number ";
cin>>a;
int b=a;
int r = 0;

for (int i = 0; ; i++)
{
    int lastdigit = a%10;
    r=r*10;
    r=r+lastdigit;
    a=a/10;
    if (a<1)
    {
        break;
    }
    
}
cout<<r+b<<endl;


    return 0;

}



// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example,
// 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
// Output :
// 1
// 153
// 370
// 371
// 407

#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        
    
    

int a = i;
// cin>>a;
int b = a;
bool ch =false;
int sum =0;
for (int j = 0; ; j++)
{
    int lastdigit = a%10;
    sum = sum + (lastdigit*lastdigit*lastdigit);
    a=a/10;
    if (a<1)
    {
        break;
    }
    
}


if (i == sum )
{
    cout<<i<<endl;
}


    }
    return 0;
}