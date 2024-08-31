// problems on loops:------------------
// 1) break; statement for break the loop
// 2)c ontinue; to skip

// composite and prime number
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    bool flag = true;
    for (int i = 2; i < (x - 1); i++)
    {

        if (x % i == 0)
        {
            cout << "its a composite number" << endl;
            flag = false;
            break;
        }
        //    else{ cout<<"its a prime number"<<endl;
        //          break;
        //    }

        if (flag == true)
        {
            cout<<"its prime";
            break;
        }
        
    }

    return 0;
}


// odd numbers 1 to 100
#include<iostream>
using namespace std;
int main () {
    for (int i = 0; i <= 100; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        
        cout<<i<<endl;
        
    }
    
    return 0;
}


#include <iostream>  //******imp*****
using namespace std;
int main() {
    int i;
    while (i=10)
    {
        cout<<i<<endl;
        i = i+1;
    }
    
    return 0;
}



#include <iostream>   //***tricky***
using namespace std;
int main (){
    int t = 10;
    while (t/=2)
    {
        cout<<"hello"<<endl;
    }
    
    return 0;
}


// count digits of a given number
#include<iostream>
using namespace std;
int main () {
    int t ;
    cin >> t;
    int count=0;
    // for (int i = 0; i < 100; i++)
    // {
    //     t=t/10;
    //     count++;
    //     if (t<1)
    //     {
    //         break;
    //     }
        
    // }


    while (t>0)
    {
        t=t/10;
        count++;
    }
    
    cout<<count<<endl;
    

    return 0;
}


// sum of digits of a given number
#include<iostream>
using namespace std;
int main () {
int n;
cin>>n;
int sum = 0;
for (int i = 0;n>0 ; i++)
{
    int lastdigit = n%10;
    sum = sum + lastdigit;
    n=n/10;
}
cout<<sum<<endl;

    return 0;
}



// reverse of a number 
#include<iostream>
using namespace std;
int main () {
    int a;
    cin>>a;
    int r = 0;
    for (int i = 0; a > 0 ; i++)
    {
        int lastdigit = a%10;
        r=r*10;
        r+=lastdigit;
        a/=10;
    }
    cout<<r<<endl;
    return 0 ;
}



// sum of htis series 
//  1-2+3-4+-6.......n
#include <iostream>
using namespace std;
int main () {
    int n ;
    cin>>n;
    int sum = 0;
    for (int  i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            sum = sum-i;
        }
        else sum = sum + i;
    }
    cout<<sum<<endl;
    
    return 0;
}



// factorial:
#include <iostream>
using namespace std;
int main () {
    int a;
    cin>>a;
    int factorial = 1;
    for (int i = 1; i <= a; i++)
    {
        // int lastdigit = a%10;
    //     factorial = factorial * lastdigit;
    //     a = a /10;
        factorial =  factorial * i ;

    }
    cout<<factorial<<endl;
    return 0;
}




// fibonacci series
#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = a+b;
        a=b;
        b= sum;
    }
    cout <<sum<<endl;

    return 0;
}




// question
#include<iostream>
using namespace std;
int main () {
    int a;
    cout<<"entre a:";
    cin>>a; 
    int b;
    cout<<"entre :b";
    cin>>b; 
    int po = 1;
    for (int i = 1; i <= b; i++)
    {
       po =po*a;
    }
    cout<<po<<endl;
    

    return 0;
}