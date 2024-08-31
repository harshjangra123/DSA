// Given an array nums of size n, return the majority element.

// The majority element is the element that 
// appears more than ⌊n / 2⌋ times. You may assume 
// that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

// question 169






// another question , converting element to its sorting index

#include<bits/stdc++.h>
using namespace std;
int main(){
    int len;cin>>len;
    vector<int> a(len);
    for (int i = 0; i < len; i++)
    {
        cin>>a[i];
    }
    
    vector<int> v(len,0);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        int min = INT_MAX;
        int index = -1;
        for(int j = 0;j<len;j++){
            if(v[j] == 1){
                continue;
            }
            else{
                if(a[j]<min){
                    min = a[j];
                    index = j;
                }
            }
        }
        a[index] = count;
        v[index] = 1;
        count++;
            
    }

    for (int i : a)
    {
        cout<<i<<" ";
    }
    

    return 0;
}


// ASSIGN COOKIES
// Assume you are an awesome parent and want to give your 
// children some cookies. But, you should give each child at 
// most one cookie.

// Each child i has a greed factor g[i],
//  which is the minimum size of a cookie that the child will be content with; 
//  and each cookie j has a size s[j]. If s[j] >= g[i],
//   we can assign the cookie j to the child i, 
//   and the child i will be content. 
//   Your goal is to maximize the number of your content children and 
//   output the maximum number. 
// question 455
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    int b;cin>>b;
    vector<int> c(a);
    vector<int> s(b);
    for (int i = 0; i < a; i++)
    {
        cin>>c[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin>>s[i];
    }
    
    sort(c.begin(),c.end());
    sort(s.begin(),s.end());

    int count = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if(c[i] >0 && s[j]>0){
                if(c[i]<=s[j]){
                    c[i] = -1;
                    s[j] = -1;
                    count++;
                }
            
            else{
                continue;
            }
            }
        }

    }
        
    cout<<count;
    
    return 0;
}

// best method

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    int b;cin>>b;
    vector<int> c(a);
    vector<int> s(b);
    for (int i = 0; i < a; i++)
    {
        cin>>c[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin>>s[i];
    }
    
    sort(c.begin(),c.end());
    sort(s.begin(),s.end());

    int count = 0;
    int i = 0;
    int j = 0;
    while(i<a && j<b){
        if(c[i] <= s[j]){
            count++;
            i++;
            j++;
        }
        j++;
    }
    cout<<count;
    
    return 0;
}


//task is to find an integer(K) such that after replacing each and every index
//of the array by |ai - K| wher results in a sorted array. if no such integer
//exists that above condition then return -1.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    float kmin = INT_MAX;
    float kmax = INT_MIN;
    for(int i =0;i<a-1;i++){
        int x = v[i]-v[i-1];
       if(x>=0){
        float kkmin = (v[i-1]+v[i])/2.0;
        if(kmin>kkmin){
            kmin = kkmin;
        }
        // kmin = max(kmin,kkmin);
       }
       if(x<0){
        float kkmax = (v[i-1]+v[i])/2.0;
        if(kmax<kkmax ){
            kmax = kkmax;
        }
        // kmax = min(kmax,kkmax);
       }       
    }
    cout<<"range : ["<<kmin<<","<<kmax<<"]";
    return 0;
}