// Count the number of elements strictly greater than x.
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v{1,2,3,4,5,6,7,8};
    int x =3;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >x)
        {
            count ++;
        }
        
    }
    cout<<count <<endl;
    
    return 0;
}
// WAP to find the largest three elements in the array.
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v{1,2,3,4,5,6,7,8};
    int max = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (max<v[i])
        {
            max = v[i];
        }
        
    }
    int smax = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (smax<v[i] && v[i] != max  )
        {
            smax = v[i];
        }
        
    }
        int tmax = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (tmax<v[i] && v[i] != max && v[i] != smax)
        {
            tmax = v[i];
        }
        
    }
    cout<<max<<endl<<smax<<endl<<tmax;    
    

    
    return 0;
}

// Check if the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v{1,2,3,4,9,6,7,8};
    bool flag = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >v[v.size()-1])
        {
            flag = true;
        }
        
    }
    if (flag == true)
    {
        cout<<"not sorted";
    }
    else cout<<"sorted";
    return 0;
}

// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v{1,2,3,4,5,6,7,8};
    int es = 0;
    int os = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i %2 == 0)
        {
            es += v[i];
        }
        else os += v[i];
        
    }
    cout<<"es ="<<es<<endl;
    cout<<"os ="<<os<<endl;
    return 0;
}
// Given an array of integers, change the value of all odd indexed elements to its second multiple 
// and increment all even indexed values by 10.
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v{1,2,3,4,5,6,7,8};

    for (int i = 0; i < v.size(); i++)
    {
        if (i %2 == 0)
        {
            v[i] *= 2;
        }
        else v[i] += 10;
        
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
#include <iostream>
using namespace std;
int main() {
int arr[5]={2,2,1,1,20};
for(int i=0;i<5;i++){
int count=0;
for(int j=0;j<5;j++){
if(arr[i]==arr[j]) count++;
}
if(count==0){
cout<<arr[i];
return 0;
}
}
cout<<"No unique value.";
return 0;
}
// If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v{1,2,3,4,3,2,1};
    vector<int> rv(v.size());
    int rr = v.size() - 1;
    for (int i = 0; i < v.size(); i++)
    {
        rv[rr] = v[i];
        rr--;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<rv[i]<<" ";
    }
    
    bool flag =false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == rv[i])
        {
            flag = true;

        }
        else if (v[i] != rv[i])
        {
            flag = false;
        }
         

        
    }
    if (flag == false)
    {
        cout<<"not palindrome";
    }
    else cout<<"palindrome";
    
    
    
    return 0;
}
// Find the error.
double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance, 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}