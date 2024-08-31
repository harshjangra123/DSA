// ARRAYS :-----------------------------------
//array is a data stucture
//storage to store data
//list  OR collection of same datatype


#include<iostream>
using namespace std;
int main () {
//syntax:
int y [8]; //8 dabbe ban chuke hai
int x [7]={1,2,3,4,5,6,7};
x[0] = 9; //we can also change the value of indexes
// it is accessing 0th index
x[7] = 69;
    return 0;
}


#include<iostream>
using namespace  std;
int main() {
int arr[7]; //0 1 2 3 4 5 6

arr[0] = 7;
arr[1] = 1;
arr[2] = 6;
arr[3] = 3;
arr[4] = 9;
arr[5] = 7;
arr[6] = 0;
    return 0;
}

//initialization:---
#include<iostream>
using namespace std;
int main( ) {
int arr[7] = {1,3,5,7,9,4,6};
cout<<arr[5];
    return 0;
}

//output and taking input:-------
#include<iostream>
using namespace std;
int main() {
    int x[7];
    //takin input
    for (int i = 0; i < 7 ; i++)
    {
        cin>>x[i];
    }
    // for output:
    for (int i = 0; i < 7; i++)
    {
        cout<<x[i]<<" ";
    }
    
    
    return 0;
}


// question 
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"entre no. of student:";
    cin>>n;
int marks[n];
for (int i = 0; i < n; i++)
{
    cin>>marks[i];
}
for (int i = 0; i < n; i++)
{
    if (marks[i]<35)
    {
        cout<<"roll no. :"<<i<<endl;
    }
    
}

    return 0;
}


// one dimensional array
// two dimensional array


//sie or size of inarrays
#include<iostream>
using namespace std;
int main () {
int a[] = {1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,4,3,2};
int size = sizeof(a)/sizeof(a[0]);
cout<<size;
    return 0;
}


//  MEMORY ALLOCATION IN ARRAYS:----------------------------
//arr[4]
//arr[2] = {1,2}
//in both above cases sare dabbe ek sath allocate ho jayenge
#include<iostream>
using namespace std;
int main () {
    int ar[4];
    cout<<&ar[0]<<endl;
    cout<<&ar[1]<<endl;
    cout<<&ar[2]<<endl;
    cout<<&ar[3]<<endl;
    // 0x61ff00
    // 0x61ff04
    // 0x61ff08
    // 0x61ff0c
    int arr[3] = {1,2,3};
    cout<<arr;  //it will give the address of the first element of the array

    return 0;
}



//swapin trailer/ will be used in strings
#include<iostream>
using namespace std;
int main () {
int num[26],temp;
num[0] = 100;
num[25] = 200;
temp = num[25];
num[25] = num[0];
num[0] = temp;
cout<<endl<<num[0] <<" "<<num[25];
    return 0;
}


//sum of given array elements:---------------------
#include<iostream>
using namespace std;
int main () {
    int a;
    cout<<"input size of array:";
    cin>>a;

    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin>>ar[i];
    }
    int sum = 0;
    for (int i = 0; i < (sizeof(ar)/sizeof(ar[0])); i++)
    {
        sum = sum + ar[i];
    }
    cout<<sum<<endl;
    
    return 0;
}


//LINEAR SEARCH  :--------------------------
// my unseccssesful way
#include<iostream>
using namespace std;
int main () {
int n;
cout<<"input the size of array";
cin>>n;

int ar[n];
cout<<"input the array:-";
for (int i = 0; i <(sizeof(ar)/sizeof(ar[0])) ; i++)
{
    cin>>ar[i];
}
int x;
cout<<"input the number x:";
cin>>x;
int y = n+1;
for (int i = 0; i <(sizeof(ar)/sizeof(ar[0])) ; i++)
{
    if (ar[i]==x)
    {
        int y = i;
        cout<<"element is present";
        break;
    }


    
}

if (y == (sizeof(ar)/sizeof(ar[0]))+1)
{
    cout<<"element is not present"<<endl;
}

cout<<y<<endl;
// cout<<x<<"is equal to "<<ar[y]<<"with index number"<<y<<endl;
    return 0;
}



// teacher's meathod:--------**************************
// find the given number in the array
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"input size of array:";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"number u want to search:";
    cin>>x;
    //check mark
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            check = true;
        }
        
    }
    if (check == true)
    {
        cout<<"element present" ;
    }
    else cout<<"not present";
    
    
    return 0;
}




//find the maximum number in the array:------------------------
// 1st meathod:
#include<iostream>
// #include<climits>
using namespace std;
int main () {
    int n;
    cout<<"input size of array:" ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // int max= INT_MIN;
    int max= arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    cout<<"maximum is:"<<max<<endl;
    return 0;
}





// find second largest element in the array:-------------
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"input size of arrat:" ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max= arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    // cout<<"maximum is:"<<max<<endl;
    int smax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (smax<arr[i] && arr[i] != max)
        {
            smax = arr[i];
        }
        
    }
    cout<<smax<<endl;
    return 0;
}



// count number in given array than a given number x:------------------
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"input size of arrat:" ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter the number x:";
    cin>>x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x)
        {
            count++;
        }
        
    }
    cout<<count<<endl;

    return 0;
}
