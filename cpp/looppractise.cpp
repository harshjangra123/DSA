

//  composite or prime number 
// prime number is havin factor itself and one
#include <iostream>
using namespace std;
int main () {
    int a;
    cin>>a;
    for (int i = 2; i < (a-1); i++)
    {
        if (a%i==0)
        {
            cout<<a<<" is a composite number";
            break;
        }
        else {cout<<a<<" is a prime number";
              break;}
        
    }
     
    
    return 0;
}

// odd numbers 1 to 100
#include<iostream>
using namespace std;
int main () {
    int a ;
    cout<<"you want odd numbers till: ";
    cin >>a;
    for (int i = 0; i <= 100; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        cout <<i<<endl;
    }
    
    return 0;
}

// *****************************************************************************************
// count digits of given number
#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int count  = 0;
    for (int i = 0; a>0; i++)
    {
        a=a/10;
        count++;
        if (a<1)
        {
            break;
        }
        
    }
    cout<<count<<endl;


    return 0;
}



// sum of digits o a given number
#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        int lastdigit = a%10;
        sum = sum + lastdigit;
        a=a/10;
        if (a<0)
        {
            break;
        }
        
    }
    cout<<sum<<endl;
    
    return 0;
}


// reverse a number
#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int r= 0;
    for (int i = 0;  a>0; i++)
    {
        int lastdigit = a%10;
        r=r*10;
        r=r+lastdigit;
        a=a/10;

    }
    cout<<r<<endl;
    return 0;
}

// ****************************************************************************

// product of digits of given numbe
#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int count = 1;
    if (n>=0)
    {

    if (n>0)
    {

    for (int i = 0;  n>0; i++)
    {
        int lastdigit = n%10;
        count = count*lastdigit;
        n=n/10;


    }
    cout<<count<<endl;
    }
    else if (n==0)
    {
        cout<<0<<endl;
    }
    

    }
    else cout<<"plz entre vakid number"<<endl;
    return 0;
}

// sum of series:
#include<iostream>
using namespace std;
int main () {
    int a;
    cin>>a;
    int dum = 0;
    for (int i = 0; i <= a; i++)
    {
        if (i%2==0)
        {
            dum -=i;
        }
        else dum +=i;
    }
    cout<<dum<<endl;

    return 0;
}



// power of a number

#include <iostream>
using namespace std;
int main () {
    int a;
    int b;
    cin>>a;
    cin>>b;
    int pow = 1;
    for (int i = 0; i < b; i++)
    {
        pow = pow *a;
    }
    cout<<pow<<endl;
    return 0;
}



// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//arithmatic progression:-
#include<bits/stdc++.h>
using namespace std;
int main () {
    int gg;
    cout<<"how many numbers of terms of a.p. you need? ";
    cin>>gg;
    int start = 1 ;

    for (int i = 0; i < gg; i++)
    {
        cout<<start<<" ";
        start ++;
        
    }
    
    return 0;
}


// reverse ap:------
#include<bits/stdc++.h>
using namespace std;
int main () {
    int gg;
    cout<<"from where do you want to start? ";
    cin>>gg;
    int start = gg ;

    for (; ;)
    {
        cout<<start<<" ";
        start -= 2;
        if (start<1)
        {
            break;
        }
    }
    
    return 0;
}




//composite or prime :----------
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cout<<"input the number you want to check: ";
    cin>>n;

    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 )
        {
            flag = 0;
        }
        
    }

    if (flag == 0)
    {
        cout<<"composite number";
    }
    else cout<<"prime number";
    
    return 0;
}



//count number of digits in a number
#include<bits/stdc++.h>
using namespace std;
int main () {
    int a;
    cout<<"enter the number: ";
    cin>>a;
    int uu = a;
    int count  =0;
    for (int i = 0; ; i++)
    {
        uu = uu/10;
        count ++;
        if (uu<1)
        {
            break;
        }
        

    }
    cout<<count<<endl;
    
    return 0;
}
//sum of a digit's number:---------
#include<bits/stdc++.h>
using namespace std;
int main () {
    int a;
    cout<<"enter the number: ";
    cin>>a;
    int uu = a;
    int count  =0;
    for (int i = 0; ; i++)
    {
        if (uu<1)
        {
            break;
        }
        int lastdigit = uu%10;
        count += lastdigit;
        uu = uu/10;
        

    }
    cout<<count<<endl;
    
    return 0;
}


//reverse a digit:-----
#include<bits/stdc++.h>
using namespace std;
int main () {
    int a;
    cout<<"enter the number: ";
    cin>>a;
    int uu = a;
    int count  =0;
    for (int i = 0; ; i++)
    {
        if (uu<1)
        {
            break;
        }
        int lastdigit  = uu % 10;
        count *= 10;
        count += lastdigit;
        uu = uu/10;
        

    }
    cout<<count<<endl;
    
    return 0;
}

//finding gcd of a number : -
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int gg ;
    for (int i = min(a,b); i >=0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gg = i;
            break;
        }
        
    }
    return gg;   
}

int main() {
int a,b;
cin>>a>>b;

// int gucci = gcd(a,b);
cout<<gcd(a,b)<<endl; 
    return 0;
}


//finding factorial 
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;

    int count = 1;
    for (int i = 1; i <= a; i++)
    {
        count *= i;
    }
    cout<< count<<endl;
    
    return 0;
} 
