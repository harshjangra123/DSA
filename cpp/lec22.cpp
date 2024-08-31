//is array sorted?
#include<bits/stdc++.h>
using namespace std;

bool issorted(vector<int> v){
    for (int i = 0; i < v.size()-1; i++)
    {
            if(v[i] > v[i+1]){
                return false;
            }
        
    }
    return true;
}

int main () {
    int n;cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    cout<<issorted(v);
    return 0;
}


//BUBBLE sort
#include<bits/stdc++.h>
using namespace std;

bool issorted(vector<int> v){
    for (int i = 0; i < v.size()-1; i++)
    {
            if(v[i] > v[i+1]){
                return false;
            }
        
    }
    return true;
}


void orting(vector<int> &v){
    int len = v.size();
    for(int i = 0;i<len-1;i++){
        if(issorted(v)){
            break;
        }
        for(int j = 0;j<len-i-1;j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main(){
    int a;
    cin>>a;

    vector<int> v(a);
    for(int i =0;i<a;i++){
        cin>>v[i];
    }
    orting(v);
    for(int i =0;i<a;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

//sort a string in decreasing 
// order of values associated after removal of 
// values smaller than X
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    getline(cin,s);
    int len = s.length();
    
    for(int i = 0 ;i<len-1;i++){
        for(int j = 0;j<len-i-1;j++){
            if(int(s[j]) < int(s[j+1])){
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(int i =0;i<len;i++){
        if(s[i] > int('x')){
            cout<<s[i]<<" ";
        }
        else{
            continue;
        }
    }
    return 0;
}

//push zeroes to end while maintaining 
// the relative order of other elements

   #include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;

    vector<int> v(a);
    for(int i =0;i<a;i++){
        cin>>v[i];
    }

    for(int i =0;i<a-1;i++){
        for (int j = 0; j < a-i-1; j++)
        {
            if(v[j] == 0){
                swap(v[j],v[j+1]);
            }
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
