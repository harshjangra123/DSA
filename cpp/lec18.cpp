//strings***********************************************
//we can use strings as  dtatype!

#include<iostream>
#include<string>
using namespace std;
int main (){

    string s;
    cout<<"input the string: "<<endl;
    getline(cin,s);

    int count =0;
    for (int i = 0;s[i] != '\0' ; i++)

    // int i =0;
    // while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'  || s[i] == 'u')
        {
            cout<<s[i]<<" ";
            count++;
        }
        // i++;
    }
    cout<<endl;
    cout<<"there are total "<<count<<" vowels.";

    return 0;
}



//in c++ strings are mutable
#include<iostream>
#include<string>
using namespace std;
int main (){
    string s = "sexz";
    s[2] = 'g';
    cout<<s<<endl;


    string k;
    cout<<"input the string: ";
    getline(cin,k);

    int i =0;
    while (k[i] != '\0')
    {
        if (i%2 == 0)
        {
            k[i] = 'a';
        }
        i++;
    }
    
    cout<<k;
    return 0;
}



//builtin string functions

//1) pushback,popback
#include<iostream>
#include<string>
using namespace std;
int main (){
    string s = "my name is harsh jangra";
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;

    string str = "abcd";
    cout<<str<<endl;
    str.push_back('e');
    str.push_back('f');
    str.push_back('g');
    cout<<str<<endl;

    str.pop_back();
    str.pop_back();
    str.pop_back();
    cout<<str<<endl;
    return 0;
}


//2) reverse
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s = "harsh jangra";
    // getline(cin,s);
    cout<<s<<endl;
    reverse(s.begin()+3,s.end()-3);
    cout<<s<<endl;

    return 0;
}

// input a string of even length and reverse 
//the first half of the string

#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    if (s.size()%2 != 0)
    {
        cout<<"plz enter a string with even length";
        return 0;
    }
    
    else
    {
        int n = s.length();
        int x = n/2;
        // reverse(s.begin()+(x-1),s.end());
        reverse(s.begin(),s.begin()+(x-1));
        cout<<s;
        return 0;
    }
    
}


//3) substring
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s = "harsh jangra";
    cout<<s.substr(2,7);
    return 0;
}

//input a string of even length and return the secong half 
// of that string inbuilt substr function
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;getline(cin,s);
    if (s.size()%2 != 0)
    {
        cout<<"plz enter a string with even length";
        return 0;
    }
    
    else
    {
        int n = s.length();
        int x = n/2;
        cout<<s.substr(x);
        return 0;
    }
    
}

//4) to_string()
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n = 123;
    string s = to_string(n);
    cout<<s;
    return 0;
}
//return the total  number of digit in a integer without using loops
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;cin>>n;
    string s = to_string(n);
    cout<<s.length();
    return 0;
}


//5) sort
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);\
    cout<<s<<endl;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    cout<<s.empty(); //to check if empty or not
    return 0;
}


//6) append or concatenate( '+' operator )
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s = "harsh";
    string i = "jangra";
    cout<<s<<endl;
    s =s + i;
    cout<<s<<endl;
    s = "the " +s;
    cout<<s<<endl;
    return 0;
}