// // 1111
// // 2222
// // 3333
// // 4444
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // 1234
// // 123
// // 12
// // 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;

//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= (a + 1) - i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // alphabet triangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         int b = 65;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << (char)b;
//             b++;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// // question 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int b;
//     cin >> b;
//     int a = b + 1;
//     for (int i = 1; i <= a; i++)
//     {
//         if (i % 2 == 0)
//         {

//             int h = 65;
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << (char)h;
//                 h++;
//             }
//         }
//         else
//         {
//             for (int k = 1; k <= i; k++)
//             {
//                 cout << k;
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // question 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "plz input the number:";
//     cin >> a;
//     int b = (a * 2) - 1;
//     int nst= 1;  //nst++/nst--
//     for (int i = 1; i <= b;i++)
//     {

//         for (int j = 1; j <= nst; j++)
//         {
//             cout<<"*";

//         }

//         if (i>=a)
//         {
//             nst--;
//         }
//         else nst++;
        
        
        
//         cout << endl;
//     }

//     return 0;
// }




// // question 6
// #include<iostream>
// using namespace std;
// int main () {
// int m ;
// cout<<"plz input lines:";
// cin>>m;
// int n;
// cout<<"plz input columns:";
// cin>>n;
// int a = m-2;

// for (int i = 1; i <= n ; i++)
// {
// cout<<"*";   
// }
// cout<<endl;
// for (int i = 1; i <= a; i++)
// {
// for (int j = 1; j <= n; j++)
// {
//     if (j==1 || j == n)
//     {
//         cout<<"*";
//     }
//     else cout<<" ";
    
// }
// cout<<endl;
// }


// for (int i = 1; i <= n ; i++)
// {
// cout<<"*";   
// }

//     return 0;
// }





// question 7
#include<iostream>
using namespace std;
int main () {
int a ;
cin>>a;
int nsp = (a-1); //nsp--
int nst = a;
for (int i = 1; i <= a; i++)
{
    for (int j = 1;j <= nsp; j++)
    {
        cout<<" ";
    }
    for (int k = 1;k <= nst ; k++)
    {
        cout<<"*";
    }
    nsp--;
    cout<<endl;
    
}



    return 0;
}



// question 9
#include<iostream>
using namespace std;
int main () {
int a;
cin>>a;

for (int i = 1; i <= a; i++)
{
    int d = 65;
    for (int j = 1; j <= a-i; j++)
    {
        cout<<" ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout<<(char)d;
        d++;
    }
    
    cout<<endl;
}

    return 0;
}





// question 10
// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;
int main() {
int a;
cin>>a;
for (int i = 1; i <= a; i++)
{
   
    for (int j = i; j>0; j--)
    {
        cout<<j;
        
    }
    cout<<endl;
}

    return 0;
}




// Print the following pattern
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *
#include<iostream>
using namespace std;
int main() {
int b;
cin>>b;
int a = (b*2)-1;
int nsp = b-1; //nsp--
int nst = 1;   //nst++
for (int  i = 1; i <= a; i++)
{
    for (int j = 1; j <=nsp; j++)
    {
        cout<<" ";
    }
    for (int k = 1; k <= nst; k++)
    {
        cout<<"*";
    }


    if (i<b)
    {
        nsp--;
        nst++;
    }

    else{
        nsp++;
        nst--;
    }
    
    cout<<endl;
}

    return 0;
}