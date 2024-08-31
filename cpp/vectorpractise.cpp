// find the maximum number in the vector:------------------
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main () {
    int a;
    cout<<"input the size of vector: ";
    cin>>a;

    vector<int> v;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int max = v[0];
    for (int i = 0; i <a; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
        
    }
    
    cout<<max<<endl;
    return 0;
}

//last occurance of x:----------
#include<bits/stdc++.h>
using namespace std;

int main () {

    // vector<int> v{1,2,3,2,3,4,5,6,6,6,6,2};
    int a;
    cout<<"input the size of array :";
    cin>>a;
    vector<int> v(a);

    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    

    int x;
    cout<<"input the number: ";
    cin>>x;

    for (int i = v.size()-1; i >= 0; i--)
    {
        if(v[i] == x){
            cout<<i+1<<endl;
            break;
        }
    }
    
    return 0;
}


//reverse in the same array:----------------
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(vector<int> &a) {
    int size = a.size();
    int i = 0;
    int j = size-1;
    for (; ; )
    {
        swap(&a[i],&a[j]);
        i++;
        j--;
        if (i>j)
        {
            break;
        }
        
    }
    
}

int main () {
    int a;
    cout<<"size: ";
    cin>>a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }

    cout<<"original array:"<<endl;
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reverse(v);
    cout<<"array after reversing:"<<endl;
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}


//reverse part:------------
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reversepart(vector<int> &a,int p,int q) {
    int size = a.size();
    int i = p;
    int j = q;
    for (; ; )
    {
        swap(&a[i],&a[j]);
        i++;
        j--;
        if (i>j)
        {
            break;
        }
        
    }
    
}

int main () {
    int a;
    cout<<"size: ";
    cin>>a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    int p;
    cin>>p;
    int q;
    cin>>q;

    cout<<"original array:"<<endl;
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reversepart(v,p,q);
    cout<<"array after reversing:"<<endl;
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}

//rotate the array:-----------------
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reversepart(vector<int> &a,int p,int q) {
    int size = a.size();
    int i = p;
    int j = q;
    for (; ; )
    {
        swap(&a[i],&a[j]);
        i++;
        j--;
        if (i>j)
        {
            break;
        }
        
    }
    
}

int main () {
    int a;
    cout<<"size: ";
    cin>>a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    int n = v.size();
    int k ;
    cout<<"elements you wanna rotate: ";
    cin>>k;

    cout<<"original array:"<<endl;
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reversepart(v,0,n-k-1);
    reversepart(v,n-k,n-1);
    reversepart(v,0,n-1);
    cout<<"array after rotating:"<<endl;
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}