// #include<iostream>
// using namespace std;
// int main () {
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     if (a>b)
//     {
//         cout<<a<<" is the greatest"<<endl;
//     }
//     else cout<<b<<" is the greatest"<<endl;
    
//     return 0 ;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     cout<<"PLZ ENTRE THE RADIUS:";
//     float a;
//     cin>>a;
//     float area = 3.14 * a*a;
//     float circumfarance = 2*3.14*a;
//     if (area>circumfarance)
//     {
//         cout<<"area is grater";
//     }
//     else  cout<<"circumfarance is grater";
     
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
// int a;
// cout<<"plz input the year: ";
// cin>>a;
// if (a>1900 && a<2100)
// {
//     if (a%4==0)
//     {
//         cout<<"leap year"<<endl;
//     }
//     else cout<<"not leap year"<<endl;
    
// }
// else cout << "plz entre valid year"<<endl;

     
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
// int a;
// int b;
// int c;

// cout<<"plz input 1st triangle side: ";
// cin>>a;
// cout<<"plz input 2nd triangle side: ";
// cin>>b;
// cout<<"plz input 3rd triangle side: ";
// cin>>c;

// if (a==b && b==c && a==c)
// {
//     cout<<"equilateral";
// }
// if ((a==b && a!=c) || (a!=b && a==c) || (a!=b && b==c ))
// {
//     cout<<"isoscales";
// }
// if (a!=b && b!=c && a!=c )
// {
//     cout<<"scalene";
// }
 
// return 0;
// }



// #include<iostream>
// using namespace std;
// int main () {
// int a;
// int b;
// int c;

// cout<<"plz input 1st student marks: ";
// cin>>a;
// cout<<"plz input 2nd student marks: ";
// cin>>b;
// cout<<"plz input 3rd student marks: ";
// cin>>c;
// if ((100>=a>=0) && (100>=b>=0) && (100>=c>=0))
// {


// if (a<b && a<c)
// {
//     cout<<"1st student has the lowest marks";
// }
// else if(b<c && b<a)
// {
//     cout<<"2nd student has the lowest marks";
// }
// else if (c<a && c<b)
// {
//     cout<<"3rd student has the lowest marks";
// }

// }
// else cout<<"plz entre valid marks";

// return 0;
// }


#include <iostream>
using namespace std;
int main () {
    int a;
    int b;
    cout<<"x coordinate:";
    cin>>a;
    cout<<"y coordinate:";
    cin>>b;
    if (a!=0 && b==0)
    {
        cout<<"on the x-axis";
    }
    else cout<<"not on x-axis";
    return 0;
}