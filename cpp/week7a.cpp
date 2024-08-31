// 1) Input a string of size n and Update all the odd positions in theastring to character ‘#’. Consider 0-based indexing.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    cout<<s<<endl;
    for (int i = 0; i < s.size(); i+=2)
    {
        s[i] = '#';
    }
    cout<<s;
    return 0;
}

// 2) Input a string of length n and count all the consonants in thegiven string.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    cout<<s<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        
    }
    cout<<s;
    return 0;
}
// 3) Check whether the given string is palindrome or not.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    string g = s;
    reverse(s.begin(),s.end());
    if (g == s)
    {
        cout<<"yes";
    }
    else cout<<"no";
    
    return 0;
}

// 4) Input a string of even length and reverse the second half of the string.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    if(s.size()%2 != 0 ){
        cout<<"plz enter string with even length";
        return 0;
    }
    int n = s.size()/2;
    cout<<s<<endl;
    reverse(s.begin()+(n),s.end());
    cout<<s;
    
    return 0;
}
// 5) Input a string of length less than 10 and convert it into integer without using builtin function.
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.push_back((int)s[i] - 48);
    }
    int final=0 ;
    for (int i = v.size()-1,j=1; i >= 0; i--,j*= 10)
    {
        final = final+(v[i]*j);
    }
    cout<<final+1;
    return 0;
}