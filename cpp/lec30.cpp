#include<bits/stdc++.h>
using namespace std;

void hanoi(int n,char a,char b,char c){
    if(n == 0){
        return;
    }
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}

// TRAVERSING AN ARRAY USING RECURSION

void printarray(vector<int> v,int i){
    if(i == v.size()){
        return;
    }
    cout<<v[i]<<" ";
    printarray(v,i+1);  
}

//printing the maximum value from an array
void printmax(vector<int> v,int i,int min){
    if(i == v.size()){
        cout<<min<<endl;
        return;
    }
    if(v[i] > min){
        min = v[i];
    }
    printarray(v,i+1);
}

int storemax(vector<int> v,int i){
    if(i == v.size()){
        return 0;
    }
    return max(v[i],storemax(v,i+1));
}

//skip 'a' characters from a string
void skipa(string a,string & b,int i){
    if(i == a.size()){
        return;
    }
    if(a[i] != 'a'){
        b.push_back(a[i]);
    }
    skipa(a,b,i+1);
}

void skipaprint(string a,string b){
    if(a.size() == 0){
        cout<<b;
        return;
    }
    char ch = a[0];
    if(ch == 'a') skipaprint(a.substr(1),b);

    else {
        b.push_back(ch);
        skipaprint(a.substr(1),b);
    }
}


//problem of subsets 
void subset(string empty,string original){
    if(original.empty()){
        cout<<empty+" ";
        return;
    }
    subset(empty,original.substr(1));
    subset(empty+original[0],original.substr(1));
}
//subsets of a vector
void subsetv(vector<int> arr,int n,int i,vector<int> v){
    if(i == n){
        for(int i = 0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
        return;
    }
    subsetv(arr,n,i+1,v);

    v.push_back(arr[i]);
    subsetv(arr,n,i+1,v);
}

int main(){
    int n;cin>>n;
    // hanoi(n,'a','b','c');
    // vector<int> v(n);
    // for(int i = 0;i<n;i++)cin>>v[i];
    // cout<<storemax(v,0);
    // string a;
    // getline(cin,a);
    // string b;
    // skipa(a,b,0);
    // cout<<b;
    // skipaprint(a,"");
    // subset("",a);
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    subsetv(arr,n,0,v);
    return 0;
} 