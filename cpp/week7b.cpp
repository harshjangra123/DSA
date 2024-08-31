// 1) Input a string and concatenate with its reverse string and printit.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    string r = s;
    reverse(s.begin(),s.end());
    r = r+s;
    cout<<r<<endl;
    return 0;
}
// 2) Find the second largest digit in the string consisting of digitsfrom ‘0’ to ‘9’.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main (){
    string s;getline(cin,s);
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        v[i] -= 48;
    }
    

    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>max)
        {
            max = v[i];
        }
        
    }

    int smax= 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]> smax && v[i]<max)
        {
            smax = v[i];
        }
        
    }
    cout<<smax;
    return 0;
}
// 3) Input a string and return the number of substrings that containonly vowels.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main (){
    string s;getline(cin,s);
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        v[i] -= 48;
    }
    
    return 0;
}
// 4) Given an array of strings. Check whether they are anagram or not.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s,t;
    getline(cin,s);
    getline(cin,t);

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s== t)
    {
        cout<<"yees";
    }
    else cout<<"no";
    return 0;
}
// 5) Given a sentence ‘str’, return the word that is lexicographically maximum.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    vector<string> v;
    stringstream  sex(s);
    string temp;
    while (sex>>temp)
    {
        v.push_back(temp);
    }

    string maxi ;
    for (int i = 0; i < v.size(); i++)
    {
        if(i != v.size()-1){
        maxi =  max(v[i],v[i+1]); 
        }
        else{
            maxi = max(maxi,v[i]);
        }
    }
    cout<<maxi;
    return 0;
}