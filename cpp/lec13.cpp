// passing arrays to functions:-------------
#include <iostream>
using namespace std;
void diplay(int a[], int b) // argument  //int *a
{
    for (int i = 0; i < b; i++)
    {
        cout << a[i] << " ";
    }
    return;
}
void change(int b[])
{
    b[0] = 100;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // accessing the elements of array in another function
    // updation
    int b = sizeof(arr) / sizeof(arr[0]);
    // upr wala code neeche hi likhna hoga
    diplay(arr, b); // parameter
    change(arr);
    cout << endl;
    diplay(arr, b);
    return 0;
}
// array is always paas by reference    (default)
// int or float is always paas by value   (default)

// when you paas an array as an argument to a function ,what actualy gets passed?
//  >>address of the array.
//  >>address of the first element of the array.

// ARRAY AND POINTERS:----------------------------------------------------------

// dont mind |||||||||||||
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *ptr = arr;

    int *ptr1 = &arr[0]; // this is valid

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        // cout<<ptr<<endl;
        // ptr++;
        cout << &arr[i] << endl;
    }

    cout << '*' << ptr<<endl;
    cout << '*' << ptr;
    return 0;
}
// 0x61fef8  arr[0].s address

// pointer and arry********
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << ptr << "###" << endl;
    cout << ptr[0] << endl;
    ptr[0] = 8;
    cout << ptr[0] << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }

    return 0;
}

// conclusion :-- jab bhi hm array ko function me paas krte h, hmesha uska addres paaas krte hai (default)

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;

    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr = arr;

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}
// 1 2 3 4 5  the answer

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << i[ptr] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i[arr] << " ";
    }

    return 0;
}

// VECTORS IN C++        *****important***************************************************************************************

// array ki replacement:
// vector is a dynamic array
// syntax
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // vector
    // inserting or input dont use[]
    v.push_back(6);
    // v[1] = 1 donr use it to declaration
    v.push_back(1);
    v.push_back(0);
    v.push_back(8);
    // pushback work on capacity
    // if you want to access or update use square bracket
    //  agar array me jagah to to element daal dega nhi to jo array ka current size hai uska double kr dega
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    return 0;
}

// size and capacity
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(6);
    cout << vec.capacity() << endl;
    cout << vec.size() << endl;
    vec.push_back(5);
    cout << vec.capacity() << endl;
    cout << vec.size() << endl;
    vec.push_back(2);
    cout << vec.capacity() << endl;
    cout << vec.size() << endl;
    vec.push_back(9);
    cout << vec.size() << endl;
    vec.push_back(2);
    return 0;
}

// popback
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// operations on vector
// pushback , popback , size,capacity,at,sort

// vector with specific size
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // initializing vector with size
    vector<int> v(5);
    cout << v.size() << endl;     // 5
    cout << v.capacity() << endl; // 5

    cout << v[0];
    cout << v[1];
    cout << v[2];
    cout << v[3];
    cout << v[4];
    return 0;
}

// taking input in vectors:----------------
// if size is declared
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // initializing vector with size
    vector<int> v(5);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// if size is not declared
// dynamic array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}

// at
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(10);
    v.push_back(9);
    v.at(2) = 90;
    cout << v.at(2) << endl;

    return 0;
}

// sort :- in the ascending order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "input the size of the vector:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}
// we can put elements in the vector within the same row
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{12, 56, 33, 2, 10, 5, 7};

    sort(v.begin(), v.end());

    cout << "Sorted vector is \n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}

// PASSING VECTORS TO FUNCTIONS:--------------------------------
#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> &a)
{
    a[2] = 100;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    vector<int> v{4, 6, 10, 9};
    // v.push_back (4);
    // v.push_back (6);
    // v.push_back (10);
    // v.push_back (9);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// vector are passed by value as default . each time you pass new vector is created
// we can paas by refrence by using '&'

// find the last occurence of x in array??
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "input the size of array:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int x;
    cout << "input the number x";
    cin >> x;

    int index;
    for (int i = (n - 1); i >= 0; i--)
    {
        if (v[i] == x)
        {
            index = i;
            break;
        }
    }
    cout << "the last occurrence of in the array is " << index << "index";

    return 0;
}
// another meathod is searching

// find the doublet in the array whose sum is equal to the given vale x
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "input the size of array:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int x;
    cout << "input the number x";
    cin >> x;
    for (int i = 0; i < v.size() - 2; i++)
    {
        for (int j = i + 1; j < v.size() - 1; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << '(' << i << ',' << j << ')' << endl;
            }
        }
    }

    return 0;
}

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         if (v.at(i) + v.at(j) == x)
//         {
//             cout<<'('<<i<<','<<j<<')'<<endl;
//         }

//     }

// }

// wap to copy the contents of one array into another in the reverse order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse (vector <int> a) {
vector <int> ra(a.size());
int x= a.size() - 1 ;
for (int i = 0; i < a.size(); i++)
{
    ra[i] = a[x];
    x--;
}
for (int i = 0; i < a.size(); i++)
{
    cout<<ra[i]<<" ";
}


}
int main()
{
    vector<int> v{1,2,3,4,5};
    reverse(v);
    return 0;
}
//another meathod
#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> a) {
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main () {
    vector<int>v{1,2,3,4,5};
    display(v);
    vector<int>rv(v.size());
    for (int i = 0; i < rv.size(); i++)
    {
        rv[i] = v[v.size() - 1 -i];
    }
    cout<<endl;
    display(rv);
    
    return 0;
}


// two pointers
//wap to reverse the array without using any exta array
#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> a) {
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
}
void swap(int *i,int *j) {
    int empty = *i;
    *i = *j;
    *j = empty;
    
}
int main () {
    vector<int> v{1,2,3,4,5};
    display(v);
    cout<<endl;
    // int i = 0;
    // int j = v.size()-1;
    // while (i<=j)
    // {
    //     swap(&v[i],&v[j]);
    //     i++;
    //     j--;
    // }
    
    for (int i =0, j = v.size()-1; ;)
    {
       swap(&v[i],&v[j]);
        i++;
        j--; 
        if (i>j)
        {
            break;
        }
        
    }
    
    display(v);
    cout<<endl;
    
    return 0;
}


// REVERSE PART OF AN ARRAY :-----  ***IMPORTANT***
#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> a) {
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
}
void swap(int *i,int *j) {
    int empty = *i;
    *i = *j;
    *j = empty;
    
}
void reversepart (vector<int>& v,int a,int b) {
        for (int i =a, j = b; ;)
    {
       swap(&v[i],&v[j]);
        i++;
        j--; 
        if (i>j)
        {
            break;
        }
        
    }
}
int main () {
    vector<int> v{1,2,3,4,5};
    display(v);
    cout<<endl;
    int a;
    cout<<"input the first index:";
    cin>>a;

    int b;
    cout<<"input the second index:";
    cin>>b;

    reversepart(v,a,b);

    
    display(v);
    cout<<endl;
    
    return 0;
}


//  ROTATE THE ARRAY:----------------
#include<iostream>
#include<vector>
using namespace std;
void display (vector<int> a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void swap (int *a,int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reversepart(vector<int>& v,int a,int b) {
    int i = a;
    int j = b;
    for (; i<=j ; )
    {
        swap(&v[i],&v[j]);
        i++;
        j--;


    }
    
}
int main () {
    int dd;
    cin>>dd;
vector<int> v(dd) ;
for (int i = 0; i < v.size(); i++)
{
    cin>>v[i];
}  
    int a;
    int n = dd;
    int k;
    cout<<"input the number k:";
    cin>>k;

    reversepart(v,0,n-k-1);
    reversepart(v,(n-k),n-1);
    reversepart(v,0,n-1);
    display(v);

    return 0;
}