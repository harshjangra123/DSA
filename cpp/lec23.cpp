//selection sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    vector<int> v(a);
    for(int i =0;i<a;i++){
        cin>>v[i];
    }


    for(int i = 0;i<a;i++){
        int min = INT_MAX;
        int index = -1;
        for (int j = i; j < a; j++)
        {
            if(v[j] < min){
                min = v[j];
                index = j;
            }
        }
        swap(v[i],v[index]);
    }

    for (int i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}


//k minimum elements from an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    vector<int> v(a);
    for(int i =0;i<a;i++){
        cin>>v[i];
    }
    int k;cout<<"input k: ";cin>>k;

    for (int i = 0; i < k; i++)
    {
        int min = INT_MAX;
        int index = 69;
        for (int j = i; j < a; j++)
        {
            if(v[j] < min){
                min = v[j];
                index = j;
            }
        }
        swap(v[i],v[index]);
    }
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}

// insertion sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    vector<int> v(a);

    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }

    for (int i = 1; i < a; i++)
    {
        int j = i;
        while (j>0 && v[j]<v[j-1])
        {
            swap(v[j],v[j-1]);
            j--;
        } 
    }
    
    for (int i : v)
    {
        cout<<i<<" ";
    }
    
    
    return 0;
 }