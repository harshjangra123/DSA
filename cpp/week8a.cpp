// Given an array of digits (values are from 0 to 9), the
// task is to find the minimum possible sum of two numbers
// formed from digits of the array. Please note that all
// digits of the given array must be used to form the two
// numbers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }

    // for (int i = 0; i < a; i++)
    // {
    //     int min = 6969696;
    //     int index = -1;
    //     for(int j = i;j<a;j++){
    //         if(v[j]<min){
    //             min = v[j];
    //             index = j;
    //         }
    //     }
    //     swap(v[i],v[index]);
    // }
    
    for (int i = 1; i < a; i++)
    {
        int j = i;
        while(j>0 && v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
    
    vector<int> smallest = v;
    // swap(v[a-1],v[a-2]); wrong in some cases
    for (int i = a-1; i >=0; i--)
    {
        if(v[i]!=v[i-1]){
            swap(v[i],v[i-1]);
            break;
        }
    }
    
    vector<int> second = v;

    // for (int i : v)
    // {
    //     cout<<i<<" ";
    // }

    long smal = 0;
    for(int i = 0;i<a;i++){
        smal *= 10;
        smal += smallest[i];
    }
    // cout<<smal;
    
    long seco = 0;
    for(int i = 0;i<a;i++){
        seco *= 10;
        seco += second[i];
    }
    cout<<seco+smal;
    return 0;
}

// Given an array of strings arr[] with all strings in lowercase.
// Sort given strings using Bubble Sort and display the sorted
// array
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int len = a.size();

    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if(int(a[j]) > int(a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
        
    }
    cout<<a;
    
    return 0;
}