//input a string and return the number of times the 
//neighbouring character are different from each other

#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            if (s[i] != s[i+1])
            {
                count++;
            }
            
        }
        else if (i == s.size()-1)
        {
            if (s[i] != s[i-1])
            {
                count++;
            }
            
        }
        else{
            if (s[i] != s[i+1] && s[i] != s[i-1])
            {
                count++;
            }
            
        }
    }
    
    cout<<count<<endl;
    return 0;
}


//given two strings s and t ,return true if 
//t is an anagram of s,and false otherwise.
//leetcode 242
#include<bits/stdc++.h>
using namespace std;
bool anagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s == t)
    {
        return true;
    }
    return false;
}
int main (){
    string s,t;
    cout<<"input s:"<<endl;
    getline(cin,s);
    cout<<"input t:"<<endl;
    getline(cin,t);

    if (anagram(s,t))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}



//print the character with highest frequncy in the string:
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);

    int maxfre = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int count =0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
            if (count>maxfre)
            {
                maxfre = count;
            }
            
        }
        
    }
    cout<<maxfre<<"-->";

    for (int i = 0; i < s.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (count == maxfre)
        {
            cout<<s[i];
            break;
        }
        
        
    }
    
    return 0;
}


//more efficient meathod:-----------
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);

    vector<int> v(26);
    
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii-97]++;

    }
    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>max)
        {
            max = v[i];
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == max)
        {
            cout<<(char)(i+97)<<"-->"<<v[i];
            break;
        }
        
    }
    

    
    
    return 0;
}



//stringstream class
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main (){
    string s;
    getline(cin,s);

    stringstream ss(s);
    string temp;
    while (ss>>temp)
    {
        cout<<temp<<endl;
    }
    
    
    return 0;
}


//you are given a sentance "str" ,return the word
//that is occuring most m=number of times in that sentance
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    string s;getline(cin,s);
    stringstream secs(s);
    string temp;
    vector<string> v;
    while (secs>>temp)
    {
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    int maxcount = 1;
    int count =1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i-1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxcount = max(maxcount,count);
    }

    int cnt = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i-1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count == maxcount)
        {
            cout<<maxcount<<"-->"<<v[i];
            break;;
        }
        
    }    
    return 0;
}



//stoi and stoll
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main (){
    string s = "1234";
    int x = stoi(s);
    cout<<x<<endl;

    string ss = "123456789123456789";
    long long xx = stoll(ss);
    cout<<xx;
    return 0;
}


//given n string consisting of digits from 0 to 9.return ,
//the index of string which has maximum value
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main (){
    string s;getline(cin,s);

    stringstream sex(s);
    string temp;
    vector<string> v;
    while (sex>>temp)
    {
        v.push_back(temp);
    }
    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(stoi(v[i]) > max){
            max = stoi(v[i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (stoi(v[i]) == max)
        {
            cout<<i;
            break;
        }
        
    }
    
    
    
    return 0;
}



// Write a function to find the longest common prefix string amongst an array of strings.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    stringstream sex(s);
    string temp;
    vector<string> v;
    while(sex>>temp){
        v.push_back(temp);
    }
    int n = v.size();
    sort(v.begin(),v.end());
    string first = v[0];
    string last =  v[n-1];
    string common ="" ;
    for (int i = 0; i < min(first.size(),last.size()); i++)
    {
        if(first[i] == last[i]){
            common+=first[i];
        }
    }
    cout<<common;
    return 0;
}


//given two strings ,check if given strings are 
//isomorphic or not
#include<bits/stdc++.h>
using namespace std;
bool isomorhic(string s,string t){
    if(s.size()!=t.size()) return false;
    vector <int> v(150,1000);
    // s's prespective
    for (int i = 0; i < s.size(); i++)
    {
        int id = (int)s[i];
        if(v[id] == 1000) v[id] = s[i] - t[i];
        else if (v[id] != (s[i]-t[i])) return false;
    }
    // filling again with 1000 the vector
    for (int i = 0; i < 150; i++)
    {
        v[i] = 1000;
    }

    //t's prepective
    for (int i = 0; i < t.size(); i++)
    {
        int id = (int)t[i];
        if(v[id] == 1000) v[id] = t[i]-s[i];
        else if (v[id] != t[i]-s[i]) {
            return false;
        }
    }
    
    return true;
}
int main (){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    cout<<isomorhic(s,t);
    
    return 0;
}